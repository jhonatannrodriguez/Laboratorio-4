#include "../include/Usuario.h"

Usuario::Usuario()
{
    this->nickname = '0';
    this->fecha_nacimiento = DTFecha(0,0,0);
    this->contrasenia = '0';
}

Usuario::Usuario(string nickname, DTFecha fecha_nacimiento, string contrasenia)
{
    this->nickname = nickname;
    this->fecha_nacimiento = fecha_nacimiento;
    this->contrasenia = contrasenia;
}

void Usuario::setNickname(string nickname)
{
    this->nickname = nickname;
}

void Usuario::setFecha_nacimiento(DTFecha fecha_nacimiento)
{
    this->fecha_nacimiento = fecha_nacimiento;
}

void Usuario::setContrasenia(string contrasenia)
{
    this->contrasenia = contrasenia;
}

string Usuario::getNickname()
{
    return this->nickname;
}

DTFecha Usuario::getFecha_nacimiento()
{
    return this->fecha_nacimiento;
}

string Usuario::getContrasenia()
{
    return this->contrasenia;
}

Usuario::~Usuario(){
    
}




