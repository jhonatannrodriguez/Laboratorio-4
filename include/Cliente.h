#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "Usuario.h"

class Cliente : public Usuario {
private:
    string calle;
    int numero_puerta;
    string ciudad_residencia; 

public:
    Cliente();
    Cliente(string , int, string);
    void setCalle(string);
    void setNumeroPuerta(int);
    void setCiudadResidencia(string);
    string getCalle();
    int getNumeroPuerta();
    string getCiudadResidencia();
    
    virtual ~Cliente();
};

#endif