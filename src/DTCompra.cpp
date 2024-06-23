#include "../include/DTCompra.h"

    DTCompra :: DTCompra() {
        this->nombre = "";
        this->fecha = DTFecha(0,0,0);
        this->ID = "";
    }
    
    
    DTCompra :: DTCompra(DTFecha fecha, string nombre, string ID) {
        this->nombre = nombre;
        this->fecha = fecha;
        this->ID = ID;
    }

    string DTCompra :: getNombre() {
        return this->nombre;
    }

    DTFecha DTCompra :: getFecha() {
        return this->fecha;
    }

    string DTCompra :: getID() {
        return this->ID;
    }


   ostream& operator<<(ostream& os, DTCompra& prod) {
    os << "ID: " << prod.getID() << " Fecha de la compra: "<< prod.getFecha() << "Nombre cliente: " << prod.getNombre();
    return os;
} 

    DTCompra :: ~DTCompra() {} //Llevan destructor?