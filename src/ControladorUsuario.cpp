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

void ControladorUsuario :: seleccionarUsuario(string nombre) {
    map<string, Usuario *>::iterator it = coleccionUsuarios.find(nombre);
    this->usuarioRecordado = it->second;
}

set<string> ControladorUsuario :: consultarUsuarios() {
    set<string> res;
    for (map<string, Usuario *>::iterator it= instancia->coleccionUsuarios.begin(); it != instancia->coleccionUsuarios.end(); ++it)
    {
        res.emplace(it->second->getNickname());
    } 
    return res;
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
    set<Producto*> setProd = vendedor->getProductos(); ////////////////
    ControladorProducto * CP = ControladorProducto::getInstancia();
    return CP->obtenerDTP(setProd);
}

void ControladorUsuario :: aniadirProducto(string codigo, unsigned int cantidad){
    ControladorProducto * CP = ControladorProducto::getInstancia();
    CP->aniadirProducto(this->promocionRecordada, codigo, cantidad); //////
}

void ControladorUsuario :: darDeAltaPromo(){

}

void ControladorUsuario :: nuevoComentario(string txt) {
    Usuario * user = getusuarioRecordado();
    Comentario* coment = Comentario(txt, DTFecha(0,0,0), to_string(this->idComentario));
    this->idComentario++;
    user->agregarComentario(coment);
    ControladorProducto * CP = ControladorProducto::getInstancia();
    Producto * prod = CP->getpRecordado();
    prod->agregarComentario(coment);
}

/*DTVendedorInfo ControladorUsuario :: seleccionarPromocion(string nombre_promocion){
    
}*/






