#ifndef DTCLIENTE_H
#define DTCLIENTE_H

#include <string>

using namespace std;

class DTUsuario {
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