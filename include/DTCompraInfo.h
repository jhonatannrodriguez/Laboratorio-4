#ifndef _DTCOMPRAINFO_H
#define _DTCOMPRAINFO_H

#include DTFecha.h

class DTCompraInfo
{
private:
    float Monto;
    DTFecha Fecha_compra; 
public:
    DTCompraInfo();
    DTCompraInfo(float Monto,DTFecha Fecha_compra);
    string getMonto();
    DTFecha getFecha();
  
};

#endif
