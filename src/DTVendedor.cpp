#include "../include/DTVendedor.h"

DTVendedor::DTVendedor() : DTUsuario()
{
    this->RUT = '0';
}

DTVendedor::DTVendedor(string nickname, DTFecha fecha_nacimiento, string contrasenia, string RUT) : DTUsuario(nickname, fecha_nacimiento, contrasenia)
{
    this->RUT = RUT;
}

string DTVendedor::getRUT()
{
    return this->RUT;
}

DTVendedor::~DTVendedor()
{

}

void DTVendedor::Imprimir(ostream &o)
{
    o << "Nombre del vendedor: " << this->getNickname() << endl;
    o << "Fecha de nacimiento : " << this->getFechaNacimiento() << endl; //Puede que este mal 
    o << "Codigo RUT:" << this->getRUT() << endl;
    
       
}

