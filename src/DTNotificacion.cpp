#include "../include/DTNotificacion.h"

DTNotificacion::DTNotificacion() {
    this->nombrePromo = "";
    this->productos;
    this->descuento = 0;
    this->vencimiento = DTFecha(0,0,0);
}

DTNotificacion::DTNotificacion(string nombrePromo, set<string> productos, float descuento,  DTFecha vencimiento) {
    this->nombrePromo = getNombrePromo;
    this->productos = productos;
    this->descuento = descuento;
    this->vencimiento = vencimiento;
}

string DTNotificacion:getNombrePromo() {
    return = this->nombrePromo;
}

set<string> DTNotificacion:getProductos() {
    return = this->productos;
}

float DTNotificacion:getDescuento() {
    return = this->descuento;
}

DTFecha DTNotificacion:getVencimiento() {
    return = this->vencimiento;
}