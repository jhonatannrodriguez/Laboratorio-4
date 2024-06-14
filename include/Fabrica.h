#ifndef _FABRICA_H
#define _FABRICA_H

#include "ControladorUsuario.h"
#include "ControladorProducto.h"
#include "fechaSistema.h"

class Fabrica
{
private:
    static Fabrica *instancia;
    Fabrica();
public:
    IUsuario* getIUsuario();
    IProducto* getIProducto();
    fechaSistema* getfechaSistema();
    static Fabrica * getInstancia();
    ~Fabrica();
};

#endif