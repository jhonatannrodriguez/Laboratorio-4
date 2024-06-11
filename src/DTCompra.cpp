#include "../include/DTCompra.h"

    DTCompra :: DTCompra() {
        this->nicknameCliente = "";
        this->fecha = DTFecha(0,0,0);
    }

    DTCompra :: DTCompra(string nicknameCliente,DTFecha fecha) {
        this->nicknameCliente = nicknameCliente;
        this->fecha = fecha;
    }

    string DTCompra :: getNicknameCliente() {
        return this->nicknameCliente;
    }

    DTFecha DTCompra :: getFecha() {
        return this->fecha;
    }
    DTCompra :: ~DTCompra() {} //Llevan destructor?