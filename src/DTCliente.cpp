#include "../include/DTCliente.h"

DTCliente::DTCliente() : DTUsuario()
{
    this->calle = '0';
    this->numero_puerta = 0;
    this->ciudad = '0';
    
}

DTCliente::DTCliente(string nickname, DTFecha fecha_nacimiento, string contrasenia, string calle, int numero_puerta, string ciudad) : DTUsuario(nickname, fecha_nacimiento, contrasenia)
{
    this->calle = calle;
    this->numero_puerta = numero_puerta;
    this->ciudad = ciudad;
}

string DTCliente::getCalle()
{
    return this->calle;
}

string DTCliente::getCiudad()
{
    return this->ciudad;
}

int DTCliente::getNumeroPuerta()
{
    return this->numero_puerta;
}

DTCliente::~DTCliente()
{

}

void DTCliente::Imprimir(ostream &o)
{
    o << "Nombre del cliente: " << this->getNickname() << endl;
    o << "Fecha de nacimiento : " << this->getFechaNacimiento() << endl; //Puede que este mal 
    o << "Calle:" << this->getCalle() << endl;
    o << "Numero de puerta:" << this->getNumeroPuerta() << endl;
    o << "Ciudad:" << this->getCiudad() << endl;
    
    
       
}