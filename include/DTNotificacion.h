#ifndef DTNOTIFICACION_H
#define DTNOTIFICACION_H

using namespace std;
#include "DTFecha.h"
#include <set>
#include <string>
#include <iostream>

class DTNotificacion {
    private:
        string nombrePromo;
        set<string> productos;
        float descuento;
        DTFecha vencimiento;
    public:
        DTNotificacion();
        DTNotificacion(string nombrePromo, set<string> productos, float descuento,  DTFecha vencimiento);
        string getNombrePromo();
        set<string> getProductos();
        float getDescuento();
        DTFecha getVencimiento();
} ;

#endifa