#include "../include/DTCliente.h"

    DTCliente :: DTCliente() {
        this->direccion = "";
        this->ciudad = "";
    }

    DTCliente :: DTCliente(string direccion, string ciudad) {
        this->direccion = direccion;
        this->ciudad = ciudad;
    }

    string DTCliente :: getDireccion() {
        return this->direccion;
    }

    string DTCliente :: getCiudad() {
        return this->ciudad;
    }

    DTCliente :: ~DTCliente() {} //Llevan destructor?
