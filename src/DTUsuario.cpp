#include "../include/DTUsuario.h"

DTUsuario::DTUsuario()
{
    this->nickname = '0';
    this->fecha_nacimiento = DTFecha(0,0,0);
    this->contrasenia = '0';
}

DTUsuario::DTUsuario(string nickname, DTFecha fecha_nacimiento, string contrasenia)
{
    this->nickname = nickname;
    this->fecha_nacimiento = fecha_nacimiento;
    this->contrasenia = contrasenia;
}



void DTUsuario::setNickname(string nickname)
{
    this->nickname = nickname;
}

void DTUsuario::setFecha_nacimiento(DTFecha fecha_nacimiento)
{
    this->fecha_nacimiento = fecha_nacimiento;
}

void DTUsuario::setContrasenia(string contrasenia)
{
    this->contrasenia = contrasenia;
}

string DTUsuario::getNickname()
{
    return this->nickname;
}

DTFecha DTUsuario::getFechaNacimiento()
{
    return this->fecha_nacimiento;
}

string DTUsuario::getContrasenia()
{
    return this->contrasenia;
}

DTUsuario::~DTUsuario()
{
}

ostream &operator<<(ostream &o, DTUsuario &u)
{   
    u.Imprimir(o);
    return o;
}