#ifndef _CONTROLADORPRODUCTO_H
#define _CONTROLADORPRODUCTO_H

#include "IProducto.h"
#include "Usuario.h"
#include "Producto.h"


class ControladorProducto : public IProducto {
    private:
        map<string, Producto*> productos;  //Codigo | Producto
        static ControladorProducto * instancia;
        ControladorProducto();
    public:
        static ControladorProducto * getInstancia();
        Producto* elegirProducto(string codigo);
        set(DTProducto) getDTProductos();
};
#endif