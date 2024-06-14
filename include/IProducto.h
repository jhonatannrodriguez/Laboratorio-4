#ifndef _IPRODUCTO_H
#define _IPRODUCTO_H

#include "DTFecha.h"
#include "EnumTipoProducto.h"
using namespace std;
#include <string>

class IProducto {
public:
    virtual string ingresarProducto(string nombre, float precio, unsigned int stock, string descripcion, TipoProducto categoria) = 0;
    virtual void darAltaProducto(string codigo) = 0;

    virtual ~IProducto();
};
#endif