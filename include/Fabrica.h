#ifndef _FABRICA_H
#define _FABRICA_H

#include "IUsuario.h"
#include "ControladorUsuario.h"


class Fabrica
{
private:
    static Fabrica *instancia;
    Fabrica();
public:
    InterfazUsuario* getInterfazUsuario();
    static Fabrica * getInstancia();
    ~Fabrica();
};

#endif