#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "Usuario.h"
#include "DTNotificacion.h"
#include "IObserver.h"
#include "Vendedor.h"
#include "Compra.h"

class Vendedor;
class Cliente : public Usuario {
private:
    string calle;
    int numero_puerta;
    string ciudad_residencia; 

    set<DTNotificacion> nots; 
    set<Vendedor*> vendedor_suscripcion;
    set<Compra*> compra;

public:
    Cliente();
    Cliente(string nombre,DTFecha fecha_nacimiento,string contrasenia,string calle, int numero_puerta, string ciudad_residencia);
    string getCalle();
    int getNumeroPuerta();
    string getCiudadResidencia();
    void setCalle(string calle);
    void setNumeroPuerta(int numero_puerta);
    void setCiudadResidencia(string ciudad_residencia);
    void notificar(DTNotificacion dtn);
    //void suscribirse(Vendedor);
    //set<Vendedor*> getSuscritos();
    //void eliminarNotificaciones();

    ~Cliente();
};

#endif