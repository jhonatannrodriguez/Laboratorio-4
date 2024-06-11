#include "../include/DTComentario.h"

    DTComentario :: DTComentario() {
        this->texto = "";
        this->fecha = DTFecha(0,0,0);
    }

    DTComentario :: DTComentario(string texto, DTFecha fecha) {
        this->texto = texto;
        this->fecha = fecha;
    }

    DTFecha DTComentario :: getFecha() {
        return this->fecha;
    }

    string DTComentario :: getComentario() {
        return this->texto;
    }
    DTComentario :: ~DTComentario() {} // Llevan destructor?
