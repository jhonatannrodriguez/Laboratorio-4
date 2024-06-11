#ifndef _DTCOMPRAINFO_H
#define _DTCOMPRAINFO_H

#include "DTFecha.h"

class DTCompraInfo
{
private:
    float monto;
    DTFecha fecha_compra; 
public:
    DTCompraInfo();
    DTCompraInfo(float monto,DTFecha fecha_compra);
    float getMonto();
    DTFecha getFecha();
    ~DTCompraInfo();
};

#endif