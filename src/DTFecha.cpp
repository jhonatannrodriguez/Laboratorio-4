#include "../include/DTFecha.h"

//creates
DTFecha::DTFecha()
{
    dia = 0;
    mes = 0;
    anio = 0;
    
}

DTFecha::DTFecha(int dia, int mes,int anio)
{
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
    
}

//setters
void DTFecha::setDia(int dia)
{
    this->dia = dia;
}

void DTFecha::setMes(int mes)
{
    this->mes = mes;
}

void DTFecha::setAnio(int anio)
{
    this->anio = anio;
}


//getters
int DTFecha::getdia()
{
    return dia;
}

int DTFecha::getmes()
{
    return mes;
}

int DTFecha::getanio()
{
    return anio;
}


DTFecha::~DTFecha()
{

}

bool DTFecha::operator<(const DTFecha &f) //const & ??
{
    if (this->anio != f.anio)
        return this->anio <= f.anio;
    else if (this->mes != f.mes)
        return this->mes <= f.mes;
    else if (this->dia != f.dia)
        return this->dia <= f.dia;
    else return false;
}

ostream &operator<<(ostream &os, DTFecha f) //DTFecha &f puede que sea asi??
{   
    os << f.getdia() << "/" << f.getmes() << "/" << f.getanio() << endl;
    return os;
}

