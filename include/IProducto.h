#ifndef _IPRODUCTO_H
#define _IPRODUCTO_H

#include "DTFecha.h"
using namespace std;
#include <string>

class IProducto {
public:
    virtual (DTProducto) getDTProductos();
    virtual ~IProducto();
};
#endif