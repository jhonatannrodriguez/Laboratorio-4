#ifndef _CONTROLADORPRODUCTO_H
#define _CONTROLADORPRODUCTO_H

#include "IProducto.h"

class ControladorProducto : public IProducto {
    private:
        static ControladorProducto * instancia;
        ControladorProducto();
    public:
        static ControladorProducto * getInstancia();
        string ingresarProducto(string nombre, float precio, unsigned int stock, string descripcion, TipoProducto categoria);
        void darAltaProducto(string codigo);
};
#endif