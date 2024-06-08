#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "Usuario.h"
#include "DTNotificacion.h"
#include "Vendedor.h"
#include "Compra.h"

class Cliente : public Usuario {
private:
    //Atributos
    string calle;
    int numero_puerta;
    string ciudad_residencia; 
    //Pseudoatributos
    set(DTNotificacion*) nots;
    set(Vendedor*) vendedor_suscripcion;
    set(Compra*) compra;

public:
    Cliente();
    Cliente(string calle, int numero_puerta, string ciudad_residencia);
    void setCalle(string);
    void setNumeroPuerta(int);
    void setCiudadResidencia(string);
    string getCalle();
    int getNumeroPuerta();
    string getCiudadResidencia();
    
    void notificar(DTNotificacion);
    void suscribirse(Vendedor);
    set(Vendedor*) getSuscritos();
    void eliminarNotificaciones();

    ~Cliente();
};

#endif