#ifndef _IPRODUCTO_H
#define _IPRODUCTO_H

#include "DTFecha.h"
#include "DTProductoInfo.h"
#include "DTProducto.h"
#include "Producto.h"
using namespace std;
#include <string>
#include <set>
#include <map>

class IProducto {
public:
    virtual set<DTProducto> consultarProducto();
    virtual DTProductoInfo seleccionarProducto(string codigo);
};
#endif