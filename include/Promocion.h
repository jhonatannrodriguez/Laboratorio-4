#ifndef _PROMOCION_H
#define _PROMOCION_H

#include "Producto.h"
#include "DTFecha.h"
using namespace std;
#include <string>
#include <set>

struct Minimo {
    unsigned int cantidad;
    Producto* producto;
};

class Producto;
class Promocion {
private:
    string nombre;
    string descripcion;
    DTFecha vencimiento;
    float descuento;

    set<Minimo> productos;
public:
    Promocion();
    Promocion(string nombre,string descripcion,DTFecha vencimiento,float descuento);
    void setNombre(string);
    void setDescripcion(string);
    void setVencimiento(DTFecha);
    void setDescuento(float);
    string getNombre();
    string getDescripcion();
    DTFecha getVencimiento();
    float getDescuento();

    ~Promocion();
};

#endif