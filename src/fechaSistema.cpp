
#include "../include/fechaSistema.h"

    fechaSistema * fechaSistema::instancia = NULL;

    fechaSistema::fechaSistema() {}

    fechaSistema * fechaSistema :: getInstancia() {
        if (instancia == NULL)
            instancia = new fechaSistema();
        return instancia;
    }

    DTFecha fechaSistema :: getFecha() {
        return this->fecha_actual;
    }
    void fechaSistema :: setFecha(DTFecha fecha){
        this->fecha_actual = fecha;
    }

    fechaSistema :: ~fechaSistema() {}
