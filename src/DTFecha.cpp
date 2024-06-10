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


ostream &operator<<(ostream &os, DTFecha &f)
{   
    os << f.getdia() << "/" << f.getmes() << "/" << f.getanio() << endl;
    return os;
}