#include "../include/ControladorUsuario.h"


ControladorUsuario *ControladorUsuario::instancia = NULL;

ControladorUsuario::ControladorUsuario()
{
}

//getters

ControladorUsuario *ControladorUsuario::getInstancia()
{
    if (instancia == NULL)
        instancia = new ControladorUsuario();
    return instancia;
}

Usuario * ControladorUsuario :: getusuarioRecordado() {
    return this->usuarioRecordado;
}

Promocion * ControladorUsuario :: getPromocionRecordada() {
    return this->promocionRecordada;
}

map<string, Usuario *> ControladorUsuario::getColeccionUsuarios()
{
    return instancia->coleccionUsuarios;
}





set<string> ControladorUsuario :: listarVendedores() {
    set<string> res;
    for (map<string, Usuario *>::iterator it= instancia->coleccionUsuarios.begin(); it != instancia->coleccionUsuarios.end(); ++it)
    {
        Vendedor *v = dynamic_cast<Vendedor *>(it->second);
        if (v != NULL) {
            res.emplace(v->getNickname());
        }       
    } 
    return res;
}

void ControladorUsuario :: seleccionarVendedor(string nombre) {
    map<string, Usuario *>::iterator it = coleccionUsuarios.find(nombre);
    this->usuarioRecordado = it->second;
}

void ControladorUsuario :: asociarProducto(Producto * p) {
    Vendedor * v = dynamic_cast<Vendedor *>(getusuarioRecordado());
    v->asociarProducto(p);
}

//destructor
ControladorUsuario::~ControladorUsuario()
{
    for (map<string, Usuario *>::iterator it = coleccionUsuarios.begin(); it != coleccionUsuarios.end(); ++it)
        delete it->second; 
    for (map<string, Promocion *>::iterator it = coleccionPromociones.begin(); it != coleccionPromociones.end(); ++it)
        delete it->second; 
        
    coleccionPromociones.clear();
    coleccionUsuarios.clear();

}




// Operaciones del diagrama de comunicacion

bool ControladorUsuario::NuevoUsuario(DTUsuario *usuario)
{
    
    map<string, Usuario *>::iterator it = coleccionUsuarios.find(usuario->getNickname()); 
    if (it == coleccionUsuarios.end())     // Si no encuentra el nombre retorna false y apunta hacia el dtusuario        
    {
        this->datosUsuario = usuario;
        return false;
    }
    else// si el Usuario  ya fue registrado retorno true
    {
        return true;
    }
}


void ControladorUsuario::Registrar()
{

    DTCliente *dtcliente = dynamic_cast<DTCliente *>(this->datosUsuario); //Chequeo si es un cliente o vendedor
    if (dtcliente != NULL) 
    {
        Cliente *c = new Cliente(dtcliente->getNickname(), dtcliente->getFechaNacimiento(), dtcliente->getContrasenia(), dtcliente->getCalle(),dtcliente->getNumeroPuerta(),dtcliente->getCiudad()); 
        string nickname = c->getNickname();
        this->coleccionUsuarios[nickname] = c;
        this->datosUsuario = NULL;
    }
    else 
    {
        DTVendedor *dtv = dynamic_cast<DTVendedor *>(this->datosUsuario); 
        Vendedor *v = new Vendedor(dtv->getNickname(), dtv->getFechaNacimiento(), dtv->getContrasenia(), dtv->getRUT()); 
        string nickname = v->getNickname();
        this->coleccionUsuarios[nickname] = v;
        this->datosUsuario = NULL;
    }
}



 set<DTUsuario *> ControladorUsuario::ListarUsuarios()
{  

    set<DTUsuario *> res;
    for (map<string, Usuario *>::iterator it= instancia->coleccionUsuarios.begin(); it != instancia->coleccionUsuarios.end(); ++it)
    {
        Usuario *u = it->second;
        DTUsuario *dtu = u->getDTUsuario();
        res.emplace(dtu);
                
    }
    
   return res;
}

set<string> ControladorUsuario::ConsultarUsuarios()
{  

    set<string> res;
    for (map<string, Usuario *>::iterator it= instancia->coleccionUsuarios.begin(); it != instancia->coleccionUsuarios.end(); ++it)
    {
        string u = it->second->getNickname();
        res.emplace(u);
                
    }
    
   return res;
}


set<DTPromocion> ControladorUsuario::consultarPromocion() {
    set<DTPromocion> promociones;
    for (const auto& promocion : this->coleccionPromociones) {
       DTPromocion prom = DTPromocion(promocion.second->getVencimiento(), 
                        promocion.second->getDescripcion(), 
                        promocion.second->getNombre(), 
                        promocion.second->getDescuento());
        promociones.emplace(prom);
    }
    return promociones;

}


set<string> ControladorUsuario::crearPromocion(DTFecha vencimiento, string descripcion, string nombre, float descuento) {
    Promocion* promo = new Promocion(nombre, descripcion, vencimiento, descuento);
    this->coleccionPromociones[nombre] = promo;
    this->promocionRecordada = promo;
    return this->listarVendedores();
}

set<DTProducto*> ControladorUsuario :: seleccionarUnVendedor(string nickname){
    this->seleccionarVendedor(nickname);
    Vendedor *vendedor = dynamic_cast<Vendedor *>(this->usuarioRecordado); ////////////
    vendedor->agregarPromo(this->promocionRecordada);
    set<Producto*> setProd = vendedor->getProductos(); ////////////////
    ControladorProducto * CP = ControladorProducto::getInstancia();
    return CP->obtenerDTP(setProd);
}

void ControladorUsuario :: aniadirProducto(string codigo, unsigned int cantidad){
    ControladorProducto * CP = ControladorProducto::getInstancia();
    CP->aniadirProducto(this->promocionRecordada, codigo, cantidad); //////
}

void ControladorUsuario :: darDeAltaPromo(){
    ControladorProducto * CP = ControladorProducto::getInstancia();
    Vendedor *vendedor = dynamic_cast<Vendedor *>(this->usuarioRecordado);
    if (!vendedor->getObservers().empty()) {
        DTNotificacion* dtn = CP->crearNotificacion(this->promocionRecordada);
        vendedor->notificarlosObservadores(dtn);
    }
}

set<string> ControladorUsuario :: vendedoresNoSuscritos(string nombreCliente) {
    map<string, Usuario *>::iterator it = coleccionUsuarios.find(nombreCliente);
    this->usuarioRecordado = it->second;
    Cliente *cliente = dynamic_cast<Cliente *>(it->second);
    set<Vendedor*> subs = cliente->getSuscritos();
    set<string> setNoS;
    for (map<string, Usuario *>::iterator user = coleccionUsuarios.begin(); user != coleccionUsuarios.end(); ++user) {
        Vendedor *vendedor = dynamic_cast<Vendedor *>(user->second);
        if (vendedor!= NULL && subs.find(vendedor) == subs.end())
            setNoS.emplace(vendedor->getNickname());
    }
    return setNoS;
}

void ControladorUsuario :: suscribirse(string nickname) {
    map<string, Usuario *>::iterator it = coleccionUsuarios.find(nickname);
    Vendedor *vendedor = dynamic_cast<Vendedor *>(it->second);
    Cliente *cliente = dynamic_cast<Cliente *>(this->usuarioRecordado);
    cliente->suscribirse(vendedor);
}

set<DTNotificacion*> ControladorUsuario :: consultarNotificaciones(string nickname) {
    map<string, Usuario *>::iterator it = coleccionUsuarios.find(nickname);
    Cliente *cliente = dynamic_cast<Cliente *>(it->second);
    this->usuarioRecordado = it->second;
    return cliente->getNotificaciones();
}

void ControladorUsuario :: eliminarNotificaciones() {
    Cliente *cliente = dynamic_cast<Cliente *>(this->usuarioRecordado);
    cliente->eliminarNotificaciones();
}

DTVendedorInfo  ControladorUsuario :: seleccionarPromocion(string nombre_promocion){
    set<DTProducto> productos;
    map<string, Promocion *>::iterator it = this->coleccionPromociones.find(nombre_promocion);
    Vendedor *vendedor =  it->second->getVendedor(); 
    for(Producto * p : it->second->getProductos()){
        DTProducto pd = DTProducto(p->getCodigo(), p->getNombre());
        productos.emplace(pd);
    }
    return DTVendedorInfo(vendedor->getNickname(), vendedor->getFecha_nacimiento(), vendedor->getCodigoRut(), productos);
}

set<string> ControladorUsuario :: listarVendedoresSuscritos(string nickname) {

    set<string> nombres;
    map<string, Usuario *>::iterator it = coleccionUsuarios.find(nickname);
    Cliente *cliente = dynamic_cast<Cliente *>(it->second);
    this->usuarioRecordado = it->second;
    set<Vendedor*> subs = cliente->getSuscritos();
    for (Vendedor* v : subs){
        nombres.emplace(v->getNickname());
    }
    return nombres;
}

void ControladorUsuario :: eliminarSuscripcion(string nickname) {
    map<string, Usuario *>::iterator it = coleccionUsuarios.find(nickname);
    Vendedor *vendedor = dynamic_cast<Vendedor *>(it->second);
    Cliente *cliente = dynamic_cast<Cliente *>(this->usuarioRecordado);
    vendedor->eliminar(cliente);
}

Compra * ControladorUsuario :: getCompraRecordada() {
    return this->compraRecordada;
}

set<string> ControladorUsuario :: consultarClientes() {
    set<string> res;
    for (map<string, Usuario *>::iterator it= instancia->coleccionUsuarios.begin(); it != instancia->coleccionUsuarios.end(); ++it)
    {
        Cliente *c = dynamic_cast<Cliente *>(it->second);
        if (c != NULL) {
            res.emplace(c->getNickname());
        }       
    } 
    return res;
}

void ControladorUsuario :: seleccionarCliente(string nickname) {
    map<string, Usuario *>::iterator it = coleccionUsuarios.find(nickname);
    Cliente *c = dynamic_cast<Cliente *>(it->second);
    if (c != NULL) {
        this->compraRecordada = c->crearCompra();
    }
}

set<DTProducto*> ControladorUsuario :: seleccionarUsuario(string nombre) {
    map<string, Usuario *>::iterator u = this->coleccionUsuarios.find(nombre);
    this->usuarioRecordado = u->second;
    set<DTProducto*> setdtp; 
    ControladorProducto * CP = ControladorProducto::getInstancia();
    map<string, Producto*> sp = CP->getcoleccionProducto();
    for (map<string, Producto *>::iterator it= sp.begin(); it != sp.end(); ++it) {
        DTProducto * dtp = it->second->getDTP();
        setdtp.emplace(dtp);
    }
    return setdtp;
}

void ControladorUsuario :: nuevoComentario(string txt) { 
    fechaSistema * FS = fechaSistema::getInstancia();
    Usuario * user = getusuarioRecordado();
    Comentario* coment = new Comentario(txt, FS->getFecha(), to_string(this->idComentario));
    this->idComentario++;
    user->agregarComentario(coment);
    ControladorProducto * CP = ControladorProducto::getInstancia();
    Producto * prod = CP->getpRecordado();
    prod->agregarComentario(coment);
}

int ControladorUsuario :: getIDComentario() {
    return this->idComentario;
}

void ControladorUsuario :: setIDComentario(int newID) {
    this->idComentario = newID;
}






DTUsuario * ControladorUsuario :: ElegirUsuario(string nombre) {

    map<string, Usuario *>::iterator it = coleccionUsuarios.find(nombre);
    return it->second->getDTUsuario();
}

set<DTPromocion*> ControladorUsuario :: seleccionarUnVendedorPromocion(string nombre){
   map<string, Usuario *>::iterator it = this->coleccionUsuarios.find(nombre);
   set<DTPromocion*> setDT;
   Vendedor *vendedor = dynamic_cast<Vendedor *>(it->second);
   set<Promocion*> setpromo=vendedor->getPromocion();
   for (set<Promocion*>::iterator it= setpromo.begin(); it != setpromo.end(); ++it)
    {
        Promocion* p = *it;
        DTPromocion*dtp=p->getDTPromocion(); //construir funcion
        setDT.emplace(dtp);
    }

    return setDT;





    
}

