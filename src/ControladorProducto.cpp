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