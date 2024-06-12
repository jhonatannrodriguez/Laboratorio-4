#include "../include/DTPromocion.h"

    DTPromocion :: DTPromocion() {
        this->vencimiento = DTFecha(0,0,0);
        this->descripcion = "";
        this->nombre = "";
        this->descuento = 0;
    }

    DTPromocion :: DTPromocion(DTFecha vencimiento, string descripcion, string nombre, float descuento) {
        this->vencimiento = vencimiento;
        this-> descripcion = descripcion;
        this->nombre = nombre;
        this->descuento = descuento;
    }

    DTFecha DTPromocion :: getVencimiento() {
        return this->vencimiento;
    }

    string DTPromocion :: getDescripcion() {
        return this->descripcion;
    }

    string DTPromocion :: getNombre() {
        return this->nombre;
    }

    float DTPromocion :: getDescuento() {
        return this->descuento;
    }

ostream& operator<<(ostream& os, const DTPromocion& prom) {
    os << "Nombre: " << prom.getNombre() << "\n"
       << "Descripcion: " << prom.getDescripcion() << "\n"
       << "Descuento: " << prom.getDescuento() << "\n"
       << "Vencimiento: " << prom.getVencimiento() <<endl;
    return os;
} 

    DTPromocion :: ~DTPromocion() {}