#ifndef DTVENDEDOR_H
#define DTVENDEDOR_H

#include <string>
#include "DTUsuario.h"
#include <iostream>
using namespace std;

class DTVendedor : public DTUsuario {
    private:
        string RUT;
    public:
        DTVendedor(string nickname, DTFecha fecha, string contrasenia, string RUT);

        DTVendedor();
        void setRUT(string);
        string getRUT();
        ~DTVendedor();

        virtual void Imprimir(ostream &o);
        
};

#endif

