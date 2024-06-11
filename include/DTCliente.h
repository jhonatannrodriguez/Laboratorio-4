#ifndef DTCLIENTE_H
#define DTCLIENTE_H

#include "DTUsuario.h"
#include <string>

using namespace std;

class DTCliente : public DTUsuario {
    private:
        string direccion;
        string ciudad;
    public:
        DTCliente();
        DTCliente(string direccion, string ciudad);
        string getDireccion();
        string getCiudad();

        ~DTCliente();
};

#endif