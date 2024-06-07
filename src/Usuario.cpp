#include "../include/Usuario.h"

Usuario::Usuario()
{
    this->nombre = '0';
    this->fecha_nacimiento = Fecha(0,0,0);
    this->contrasenia = '0';
}

Usuario::Usuario(string nombre, Fecha fecha_nacimiento, string contrasenia)
{
    this->nombre = nombre;
    this->fecha_nacimiento = fecha_nacimiento;
    this->contrasenia = contrasenia;
}

void Usuario::setNombre(string nombre)
{
    this->nombre = nombre;
}

void Usuario::setFecha_nacimiento(Fecha fecha_nacimiento)
{
    this->fecha_nacimiento = fecha_nacimiento;
}

void Usuario::setContrasenia(string contrasenia)
{
    this->contrasenia = contrasenia;
}

string Usuario::getNombre()
{
    return this->nombre;
}

Fecha Usuario::getFecha_nacimiento()
{
    return this->fecha_nacimiento;
}

string Usuario::getContrasenia()
{
    return this->contrasenia;
}

Usuario::~Usuario(){
    
}