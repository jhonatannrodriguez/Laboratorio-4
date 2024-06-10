#ifndef DTCLIENTE_H
#define DTCLIENTE_H

#incldue "DTUsuario.h"
#include <string>

using namespace std;

class DTCliente : public DTUsuario {
    private:
        string direccion;
        string ciudad;
    public:
        DTCliente(string RUT);
        DTCliente();
        string getDireccion();
        string getCiudad();

        ~DTCliente();
};

#endif