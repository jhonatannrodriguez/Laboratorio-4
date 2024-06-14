#ifndef _FECHASISTEMA_H
#define _FECHASISTEMA_H

#include "DTFecha.h"

class fechaSistema
{
private:
    static fechaSistema *instancia;
    DTFecha fecha_actual;
    fechaSistema();
public:
    static fechaSistema * getInstancia();
    DTFecha getFecha();
    void setFecha(DTFecha fecha);

    ~fechaSistema();
};

#endif