#ifndef _PROMOCION_H
#define _PROMOCION_H

#include "Producto.h"
#include "DTFecha.h"
#include "DTPromocion.h"
#include "Vendedor.h"

using namespace std;
#include <string>
#include <set>

class Producto;
class Vendedor;

class Promocion {
private:
    //atributos
    string nombre;
    string descripcion;
    DTFecha vencimiento;
    float descuento;
    //pseudoatributos
    Vendedor * vendedor;
    set<Producto*> productos = {};
public:
    Promocion();
    Promocion(string nombre,string descripcion,DTFecha vencimiento,float descuento);
    string getNombre();
    string getDescripcion();
    DTFecha getVencimiento();
    Vendedor * getVendedor();
    set<Producto*> getProductos();
    void asociarProducto(Producto * prod, unsigned int cantidad);
    float getDescuento();
    void setNombre(string nombre);
    void setDescripcion(string descripcion);
    void setVencimiento(DTFecha vencimiento);
    void setDescuento(float descuento);
    void setVendedor(Vendedor * vend);
    DTPromocion* getDTPromocion();
        
    
    

    ~Promocion();
};

#endif