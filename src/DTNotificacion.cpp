#include "../include/DTNotificacion.h"

DTNotificacion::DTNotificacion() {
    this->nombrePromo = "";
    this->productos; // Como inicializo un set
    this->descuento = 0;
    this->vencimiento = DTFecha(0,0,0);
}

DTNotificacion :: DTNotificacion(string nombrePromo, set<string> productos, float descuento,  DTFecha vencimiento) {
    this->nombrePromo = nombrePromo;
    this->productos = productos;
    this->descuento = descuento;
    this->vencimiento = vencimiento;
}

string DTNotificacion :: getNombrePromo() {
    return this->nombrePromo;
}

set<string> DTNotificacion :: getProductos() {
    return this->productos;
}

float DTNotificacion :: getDescuento() {
    return this->descuento;
}

DTFecha DTNotificacion :: getVencimiento() {
    return this->vencimiento;
}

DTNotificacion :: ~DTNotificacion() {} // Llevan destructor los dt?