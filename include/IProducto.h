#ifndef _IPRODUCTO_H
#define _IPRODUCTO_H

#include "DTFecha.h"
#include "DTProducto.h"
#include "Producto.h"
using namespace std;
#include <string>

class IProducto {
public:
    virtual set(DTProducto) getDTProductos();
    virtual Producto* elegirProducto(string codigo);
    virtual ~IProducto();
};
#endif