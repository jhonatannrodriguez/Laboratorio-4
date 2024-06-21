#include "../include/ControladorProducto.h"

ControladorProducto *ControladorProducto::instancia = NULL;

ControladorProducto::ControladorProducto()
{
    this->codigo = 0;
}

//getters

ControladorProducto * ControladorProducto::getInstancia()
{
    if (instancia == NULL)
        instancia = new ControladorProducto();
    return instancia;
}

int ControladorProducto :: getCodigo() {
    return this->codigo;
}

Producto * ControladorProducto :: getpRecordado() {
    return this->pRecordado;
}


//destructor
ControladorProducto::~ControladorProducto()
{
    for (map<string, Producto *>::iterator it = coleccionProducto.begin(); it != coleccionProducto.end(); ++it)
        delete it->second; 
    coleccionProducto.clear();
}





//Operaciones del diagrama de comunicacion

//////////////////////
set<DTProducto*> ControladorProducto :: consultarProducto() {
    set<DTProducto*> setDTP;
    DTProducto* DTP_aux;
    map <string, Producto*> :: iterator p;
    for (p=coleccionProducto.begin();p!=coleccionProducto.end(); ++p) {
        DTP_aux = new DTProducto(p->second->getCodigo(),p->second->getNombre());
        
        setDTP.insert(DTP_aux);
    }
    return setDTP;
}

DTProductoInfo* ControladorProducto :: seleccionarProducto(string codigo) {
    map<string, Producto *>::iterator it = coleccionProducto.find(codigo);
    Producto * prod = it->second;
    DTProductoInfo* DTPI = new DTProductoInfo(prod->getDescripcion(),prod->getPrecio(),prod->getTipo(),prod->getStock(),prod->getVendedor()->getNickname());
    return DTPI;
}
/////////////////

string ControladorProducto :: ingresarProducto(string nombre, float precio, unsigned int stock, string descripcion, TipoProducto categoria) {
    Producto * p = new Producto(nombre, precio, stock, descripcion, categoria);

    this->pRecordado = p;
    this->codigo++;
    return to_string(this->codigo);
}

void ControladorProducto :: darAltaProducto(string codigo) {
    Producto * p = getpRecordado();
    p->setPromo(NULL);
    p->setCodigo(codigo);
    string c = p->getCodigo();
    this->coleccionProducto[c] = p;
    ControladorUsuario * CU = ControladorUsuario::getInstancia();
    CU->asociarProducto(p);
}

set<DTProducto*> ControladorProducto :: obtenerDTP(set<Producto*> setP){
    set<DTProducto*> res;
    for(Producto * p : setP){
        res.emplace(p->getDTP());
    }
    return res;
}

void ControladorProducto :: aniadirProducto(Promocion* promo, string codigo, unsigned int cantidad){
    map<string, Producto *>::iterator it = coleccionProducto.find(codigo);
    promo->setVendedor(it->second->getVendedor());
    Producto * prod = it->second;
    if(prod->getPromo() == NULL){
        prod->setPromo(promo);
        promo->asociarProducto(prod, cantidad);
    };
}
DTNotificacion * ControladorProducto :: crearNotificacion(Promocion* promo) {
    string nombre = promo->getNombre();
    unsigned int descuento = promo->getDescuento();
    DTFecha fecha = promo->getVencimiento();
    set<Producto*> setP = promo->getProductos();
    set<string> nombresProds;
    for (Producto* prod : setP) {
        nombresProds.emplace(prod->getNombre());
    }
    DTNotificacion* dtn = new DTNotificacion(nombre,nombresProds,descuento,fecha);
    return dtn;
}

set<DTProductoCompleto*> ControladorProducto :: listarProductos() {
    set<DTProductoCompleto*> setDTPC;
    DTProductoCompleto* DTPC;
    map <string, Producto*> :: iterator p;
    for (p=coleccionProducto.begin();p!=coleccionProducto.end(); ++p) {
        DTPC = p->second->getDTPC();
        setDTPC.emplace(DTPC);
    }
    return setDTPC;
}

void ControladorProducto :: agregarProducto(string codigo, unsigned int cantidad) {
    ControladorUsuario * CU = ControladorUsuario::getInstancia();
    Compra * c = CU->getCompraRecordada();
    map<string, Producto *>::iterator it = coleccionProducto.find(codigo);
    Producto * prod = it->second;
    unsigned int stock = prod->getStock();
    if (stock >= cantidad)
        c->asignarCantidad(prod, cantidad);
}

DTCompraInfo* ControladorProducto :: finalizarCompra() {
    DTCompraInfo* compraInfo;
    set<Promocion*> promosPosibles;
    ControladorUsuario * CU = ControladorUsuario::getInstancia();
    Compra * c = CU->getCompraRecordada();
    set<cp*> prodCompra = c->getProductos();
    set<Producto*> productosCompra;
    float monto = 0;
    for(cp * cProd : prodCompra) {
        Producto * p = cProd->producto;
        productosCompra.emplace(p);
        unsigned int cantP =c->cantProducto(p);
        p->setStock(p->getStock() - cantP);
        bool enPromo = p->estaEnPromo();
        p->setEnPromo(enPromo);
        if (enPromo) {
            Promocion * promo = p->getPromo();
            promosPosibles.emplace(promo);
        }
    }
    for(Promocion * promoPosible : promosPosibles) {
        set<Producto*> productosEnPromo = promoPosible->getProductos();
        bool esta = true;
        bool cumplePromo = true;
        for(Producto * prodEnPromo : productosEnPromo) {
            if (esta && cumplePromo) {
                esta = productosCompra.find(prodEnPromo) != productosCompra.end();
                prodEnPromo->setEsta(esta);
                if (esta) {
                    cumplePromo = prodEnPromo->verificaCantPromo(c->cantProducto(prodEnPromo));
                    prodEnPromo->setCumplePromo(cumplePromo);
                }
            } else {
                for(Producto * pEP : productosEnPromo) {
                    pEP->setEsta(false);
                    pEP->setCumplePromo(false);
                }
                break;
            }
        }
    }
    for(Producto * prod : productosCompra) {
        if (prod->getEsta() && prod->getCumplePromo()) {
            float desc = (100 - prod->getPromo()->getDescuento())/100;
            monto += c->cantProducto(prod) * prod->getPrecio() * desc;
        } else
            monto += c->cantProducto(prod) * prod->getPrecio();
    }
    auto it = promosPosibles.begin();
    while (it != promosPosibles.end()) {
        it = promosPosibles.erase(it);  
    }
    fechaSistema * fS = fechaSistema::getInstancia();
    compraInfo = new DTCompraInfo(monto, fS->getFecha());
    c->setMonto(monto);
    c->setFecha(fS->getFecha());
    for(cp * cProd : prodCompra) {
        Producto * p = cProd->producto;
        compraInfo->asociarDTPC(p->getDTPC());
    }
    
    return compraInfo;
}

map<string, Producto*> ControladorProducto :: getcoleccionProducto() {
    return this->coleccionProducto;
}

void ControladorProducto :: elegirProducto(string codigo) {
    map<string, Producto *>::iterator it = coleccionProducto.find(codigo);
    this->pRecordado = it->second;
}

set<DTComentario*> ControladorProducto :: comentariosRecursivo(set<Comentario*> s) {
    set<DTComentario*> sDTP;
    for (set<DTComentario*> :: iterator it= s.begin(); it != s.end(); ++it) {
        sDTP.emplace(new DTComentario(it->getTexto()), it->getFecha());
        set<Comentario*> resComent = it->second->getRespuestas();
        if (resComent.empty()) { 
        } else {  
            sDTP.emplace(this->comentariosRecursivo(resComent));
        }
    }
    return sDTP
}

set<DTComentario*> ControladorProducto :: listarComentarios() {
    set<DTComentario*> sDTP;
    map<string, Comentario*> comentariosPRecordado = pRecordado->getComentarios();
    for (map<string, Comentario*> :: iterator it= CP->comentariosPRecordado.begin(); it != comentariosPRecordado.end(); ++it) {
        sDTP.emplace(new DTComentario(it->first, it->second->getTexto()));
        set<Comentario*> resComent = it->second->getRespuestas();
        if (resComent.empty()) { 
        } else {  
            sDTP.emplace(this->comentariosRecursivo(resComent));
        }
    }
    return sDTP;
}

void ControladorProducto :: nuevaRespuesta(string id, string respuesta) {
    Producto * prod = this->getpRecordado();
    ControladorUsuario * CU = ControladorUsuario::getInstancia();
    Usuario * user = CU->getusuarioRecordado();
    int newID = CU->getIDComentario();
    Comentario* coment = Comentario(respuesta, DTFecha(0,0,0), to_string(newID));
    newID++;
    CU->setIDComentario(newID);
    user->agregarComentario(coment);
    map<string, Comentario *>::iterator it = prod.find(id);
    it->second->agregarRespuesta(coment);
}