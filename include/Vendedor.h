#ifndef _VENDEDOR_H
#define _VENDEDOR_H

#include "Usuario.h"
#include "Producto.h"
#include "IObserver.h"
#include "DTNotificacion.h"
#include "Promocion.h"

class Vendedor : public Usuario {
private:
    //Atributos
    string codigo_rut;
    //Pseudoatributos
    set<Producto*> producto;
    set<Promocion*> promocion;

public:
    Vendedor();
    Vendedor(string nombre,DTFecha fecha_nacimiento,string contrasenia,string codigo_rut);
    string getCodigoRut();
    void setCodigoRut(string codigo_rut);

    set<Producto*> getProductos();
    void agregar(IObserver);
    void eliminar(IObserver);
    void modificar(DTNotificacion);

    ~Vendedor();
};

#endif