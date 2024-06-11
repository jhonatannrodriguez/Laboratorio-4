#ifndef _FABRICA_H
#define _FABRICA_H

#include "ControladorUsuario.h"
#include "ControladorProducto.h"

class Fabrica {
    private:
        static Fabrica * instancia;
        Fabrica();
    public:
        static Fabrica * getInstancia();
        IUsuario * Fabrica::getIUsuario();
        IProducto * Fabrica::getIProducto();
};
#endif