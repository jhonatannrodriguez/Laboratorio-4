#include "../include/DTCompra.h"

    DTCompra :: DTCompra() {
        this->monto = 0;
        this->fecha = DTFecha(0,0,0);
    }
    
    
    DTCompra :: DTCompra(float monto,DTFecha fecha) {
        this->monto = monto;
        this->fecha = fecha;
    }

    float DTCompra :: getMonto() {
        return this->monto;
    }

    DTFecha DTCompra :: getFecha() {
        return this->fecha;
    }


   ostream& operator<<(ostream& os, DTCompra& prod) {
    os << "Fecha de la compra: "<< prod.getFecha() << "Monto: " << prod.getMonto();
    return os;
} 

    DTCompra :: ~DTCompra() {} //Llevan destructor?