#ifndef _FABRICA_H
#define _FABRICA_H

#include "ControladorUsuario.h"
#include "ControladorProducto.h"


class Fabrica
{
private:
    static Fabrica *instancia;
    Fabrica();
public:
    IUsuario* getIUsuario();
    IProducto* getIProducto();
    static Fabrica * getInstancia();
    ~Fabrica();
};

#endif