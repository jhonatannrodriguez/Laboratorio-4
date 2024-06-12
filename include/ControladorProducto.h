#ifndef _CONTROLADORPRODUCTO_H
#define _CONTROLADORPRODUCTO_H

#include "IProducto.h"

class ControladorProducto : public IProducto {
    private:
        static ControladorProducto * instancia;
        ControladorProducto();
    public:
        static ControladorProducto * getInstancia();
};
#endif