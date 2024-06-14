#ifndef DTCLIENTE_H
#define DTCLIENTE_H

#include <string>
#include "DTUsuario.h"
#include <iostream>
using namespace std;

class DTCliente : public DTUsuario {
    private:
        string calle;
        int numero_puerta;
        string ciudad;
    public:
        DTCliente(string nickname, DTFecha fecha, string contrasenia, string calle, int numero_Puerta, string ciudad );

        DTCliente();
        void setCalle(string);
        string getCalle();
        void setNumeroPuerta(string);
        int getNumeroPuerta();
        void setCiudad(string);
        string getCiudad();
        ~DTCliente();

        virtual void Imprimir(ostream &o);
};

#endif

