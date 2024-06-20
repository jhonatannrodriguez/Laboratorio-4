#include "../include/Cliente.h"
using namespace std;
#include <stdlib.h>

Cliente::Cliente():Usuario()
{

    this->calle='0';
    this->numero_puerta=0;
    this->ciudad_residencia='0';

    //Pseudoatributos



}

Cliente::Cliente(string nickname,DTFecha fecha_nacimiento ,string contrasenia, string calle,  int numero_puerta, string ciudad_residencia ):Usuario(nickname,fecha_nacimiento, contrasenia)
{
    this->calle = calle;
    this->numero_puerta=numero_puerta;
    this->ciudad_residencia=ciudad_residencia;

}

//setters
void Cliente::setCalle(string calle)
{
    this->calle = calle;
}

void Cliente::setNumeroPuerta(int numero)
{
    this->numero_puerta = numero;
}

void Cliente::setCiudadResidencia(string ciudad)
{
    this->ciudad_residencia = ciudad;

}
//getters
int Cliente::getNumeroPuerta()
{
    return this->numero_puerta;
}

string Cliente::getCalle()
{
    return this->calle;
}

string Cliente::getCiudadResidencia()
{
    return this->ciudad_residencia;
}


//???
DTCliente *Cliente::getDTCliente()
{
    DTCliente *dt = new DTCliente(getNickname(), getFecha_nacimiento(), getContrasenia(), getCalle(),getNumeroPuerta(),getCiudadResidencia());
    return dt;
}

DTUsuario* Cliente::getDTUsuario()
{
    DTUsuario* res = this->getDTCliente();
    return res;
}

void Cliente :: notificar(DTNotificacion* dtn) {
    this->nots.emplace(dtn);
}

set<Vendedor*> Cliente :: getSuscritos() {
    return this->suscripciones;
}

set<DTNotificacion*> Cliente :: getNotificaciones() {
    return this->nots;
}

void Cliente :: suscribirse(Vendedor* vendedor) {
    this->suscripciones.emplace(vendedor);
    vendedor->agregar(this);
}

Cliente::~Cliente()
{
    this->suscripciones.clear();
    for (DTNotificacion* nt : this->nots) {
        delete nt;
    }
    this->nots.clear();
    for (Compra* comp : this->compras) {
        delete comp;
    }
    this->compras.clear();
    
}

void Cliente :: eliminarNotificaciones() {
    for (DTNotificacion* nt : this->nots)
        delete nt;
    this->nots.clear();
}

set<Compra *> Cliente :: getCompras() {
    return this->compras;
}

Compra * Cliente :: crearCompra() {
    Compra * comp = new Compra();
    this->compras.emplace(comp);
    return comp;
}
