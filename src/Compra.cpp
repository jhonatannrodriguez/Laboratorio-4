#include "Compra.h"

    Compra :: Compra() {
        this->fecha = DTFecha(0,0,0);
        this->monto = 0;
    }

    Compra :: Compra(DTFecha fecha,float monto) {
        this->fecha = fecha;
        this->monto = monto;
    }

    float Compra :: getMonto() {
        return this->monto;
    }

    DTFecha Compra :: getFecha() {
        return this->fecha;
    }

    void Compra :: setMonto(float monto) {
        this->monto = monto;
    }

    void Compra :: setFecha(DTFecha fecha) {
        this->fecha = fecha;
    }

    Compra :: ~Compra() {}