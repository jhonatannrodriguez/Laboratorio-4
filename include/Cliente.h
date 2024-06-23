#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "Usuario.h"
#include "DTCliente.h"
#include "DTNotificacion.h"
#include "Vendedor.h"
#include "Compra.h"
#include "IObserver.h"

class Cliente : public Usuario, public IObserver 
{
private:
    //Atributos
    string calle;
    int numero_puerta;
    string ciudad_residencia; 
    //Pseudoatributos
    set<DTNotificacion*> nots; 
    set<Vendedor*> suscripciones={};
    set<Compra*> compras;

public:
    Cliente();
    Cliente(string nickname,DTFecha fecha_nacimiento ,string contrasenia, string calle,  int numero_puerta, string ciudad_residencia );    
    void setNumeroPuerta(int);
    void setCiudadResidencia(string); 
    void setCalle(string);

    string getCalle();
    int getNumeroPuerta();
    string getCiudadResidencia();
    
    void notificar(DTNotificacion* dtn);
    void suscribirse(Vendedor* vendedor);
    set<Vendedor*> getSuscritos();
    set<DTNotificacion*> getNotificaciones();
    void eliminarNotificaciones();
    void cancelarSub(Vendedor * v);

    set<Compra*> getCompras();
    Compra * crearCompra();

    ~Cliente();

    
    DTCliente *getDTCliente();
    virtual DTUsuario* getDTUsuario();

    
};

#endif