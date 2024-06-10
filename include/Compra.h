#ifndef _COMPRA_H
#define _COMPRA_H

using namespace std;
#include "Producto.h"
#include "DTFecha.h"
#include <set>

struct cp {
    unsigned int cantidad;
    bool enviado;
    Producto* producto;
};

class Compra
{
private:
    // atributos
    DTFecha fecha;
    float monto; 
    // pseudoatributos
    set<cp> productos;
public:
    Compra();
    Compra(DTFecha fecha,float monto);
    float getMonto();
    DTFecha getFecha();
    void setMonto(float monto);
    void setFecha(DTFecha fecha);
    ~Compra();
};

#endif
