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
        DTPromocion(DTFecha vencimiento, string descripcion, string nombre, float descuento);
        DTFecha getVencimiento() const;
        string getDescripcion() const;
        string getNombre()const;
        float getDescuento() const;

        bool operator<(const DTPromocion& other) const {
        // Comparación basada en el nombre de la promoción
            return nombre < other.nombre;
        }

        ~DTPromocion();

} ;

ostream& operator<<(ostream& os, const DTPromocion& prom);

#endif