#ifndef _DTCOMPRAINFO_H
#define _DTCOMPRAINFO_H

#include "DTFecha.h"
#include "DTProductoCompleto.h"
using namespace std;
#include <set>

class DTCompraInfo
{
private:
    float monto;
    DTFecha fecha_compra; 
    set<DTProductoCompleto*> setDTPC;
public:
    DTCompraInfo();
    DTCompraInfo(float monto,DTFecha fecha_compra);
    float getMonto();
    DTFecha getFecha();
    void asociarDTPC(DTProductoCompleto* DTPC);
    set<DTProductoCompleto*> getSetDTPC();
    ~DTCompraInfo();
};

#endif