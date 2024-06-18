#ifndef _PROMOCION_H
#define _PROMOCION_H

#include "Producto.h"
#include "DTFecha.h"
#include "DTPromocion.h"
using namespace std;
#include <string>
#include <set>

class Producto;


class Promocion {
private:
    //atributos
    string nombre;
    string descripcion;
    DTFecha vencimiento;
    float descuento;
    //pseudoatributos
    set<Producto*> productos;
public:
    Promocion();
    Promocion(string nombre,string descripcion,DTFecha vencimiento,float descuento);
    string getNombre();
    string getDescripcion();
    DTFecha getVencimiento();
    set<Producto*> getProductos();
    void asociarProducto(Producto * prod, unsigned int cantidad);
    float getDescuento();
    void setNombre(string nombre);
    void setDescripcion(string descripcion);
    void setVencimiento(DTFecha vencimiento);
    void setDescuento(float descuento);
    

    ~Promocion();
};

#endif