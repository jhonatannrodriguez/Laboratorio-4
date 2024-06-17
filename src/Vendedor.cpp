#include "../include/Vendedor.h"
using namespace std;
#include <stdlib.h>

Vendedor::Vendedor():Usuario()
{

    this->codigo_rut='0';
    

    //Pseudoatributos



}

Vendedor::Vendedor(string nickname,DTFecha fecha_nacimiento ,string contrasenia, string codigo_rut):Usuario(nickname,fecha_nacimiento, contrasenia)
{
    this->codigo_rut = codigo_rut;
}

void Vendedor :: asociarProducto(Producto * p) {
    this->productos.emplace(p);
    p->setVendedor(this);  //////////
}

Vendedor::~Vendedor()
{
    for (Promocion* it: this->promocion)
        
        delete it; 
        
    

}

//setters
void Vendedor::setCodigoRut(string codigo_rut)
{
    this->codigo_rut = codigo_rut;
}


//getters
string Vendedor::getCodigoRut()
{
    return this->codigo_rut;


}

set<Producto*> Vendedor::getProductos(){
    return this->productos;
}



DTVendedor *Vendedor::getDTVendedor()
{
    DTVendedor *dt = new DTVendedor(getNickname(), getFecha_nacimiento(), getContrasenia(), getCodigoRut());
    return dt;
}

DTUsuario* Vendedor::getDTUsuario()
{
    DTUsuario* u = this->getDTVendedor();
    return u;
}

/*void Vendedor :: notificarObservadores(DTNotificacion dtn) {
    for (IObserver* it : this->observers)
        it->notificar(dtn);
}*/
/*void Vendedor :: agregar(IObserver* o) {
    observers.emplace(o);
}
void Vendedor :: eliminar(IObserver* o) {
    observers.erase(o);
}*/
