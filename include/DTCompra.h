#ifndef _DTCOMPRA_H
#define _DTCOMPRA_H

#include <string>
#include "DTFecha.h"

using namespace std;


class DTCompra
{
private:
    float monto;
    DTFecha fecha; 
public:
    DTCompra();
    DTCompra(float monto,DTFecha fecha);
    float getMonto();
    DTFecha getFecha();
    ~DTCompra();
  
};
ostream& operator<<(ostream& os,  DTCompra& prod);

#endif