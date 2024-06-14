#ifndef _IPRODUCTO_H
#define _IPRODUCTO_H

#include "DTProducto.h"
#include "DTProductoInfo.h"
using namespace std;
#include <string>
#include <set>


class IProducto {
public:
    virtual set<DTProducto> consultarProducto();
    virtual DTProductoInfo seleccionarProducto(string codigo);
};
#endif