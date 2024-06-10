#ifndef DTPROMOCION_H
#define DTPROMOCION_H

#include "DTFecha.h"
#include <string>

using namespace std;

class DTPromocion {
    private:
        DTFecha vencimiento;
        string descripcion;
        string nombre;
        float  descuento;
    public:
        DTPromocion();
        DTPromocion(DTFecha, string, string, float);
        DTFecha getVencimiento();
        string getDescripcion();
        string getNombre();
        float getDescuento();

        ~DTPromocion();

} ;

#endif