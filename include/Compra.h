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
    DTFecha fecha;
    float monto; 
    set<cp> productos;
public:
    Compra();
    Compra(DTFecha fecha,float monto);
    void setMonto(float);
    void setFecha(DTFecha);
    float getMonto();
    DTFecha getFecha();
    ~Compra();
};

#endif
