#ifndef _IPRODUCTO_H
#define _IPRODUCTO_H

#include "DTProducto.h"
#include "DTProductoInfo.h"
using namespace std;
#include <string>
#include <set>


class IProducto {
public:
    virtual set<DTProducto> consultarProducto()=0;   ////////////
    virtual DTProductoInfo seleccionarProducto(string codigo)=0;  ////////////
    virtual string ingresarProducto(string nombre, float precio, unsigned int stock, string descripcion, TipoProducto categoria) = 0;
    virtual void darAltaProducto(string codigo) = 0;

    virtual ~IProducto() {}  
};
#endif