#ifndef _CONTROLADORPRODUCTO_H
#define _CONTROLADORPRODUCTO_H

#include "IProducto.h"
#include "Usuario.h"
#include "Producto.h"


class ControladorProducto : public IProducto {
    private:
        map<string, Producto> productos;
        static ControladorProducto * instancia;
        ControladorProducto();
    public:
        static ControladorProducto * getInstancia();
        set(DTProducto) getDTProductos();
};
#endif