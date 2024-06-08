#ifndef _VENDEDOR_H
#define _VENDEDOR_H

#include "Usuario.h"

class Vendedor : public Usuario {
private:
    string codigo_rut;

public:
    Vendedor();
    Vendedor(string);
    void setCodigoRut(string);
    string getCodigoRut();

    virtual ~Vendedor();
};

#endif