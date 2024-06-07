#ifndef _COMPRA_H
#define _COMPRA_H

using namespace std;
#include "DTFecha.h"
class Compra
{
private:
    DTFecha fecha;
    float monto; 
public:
    Compra();
    Compra(DTFecha fecha,float monto);
    void setMonto(float);
    void setFecha(DTFecha);
    float getMonto();
    DTFecha getFecha();
    
  
};

#endif
