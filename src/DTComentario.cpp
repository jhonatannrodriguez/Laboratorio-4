#include "../include/DTComentario.h"

    DTComentario :: DTComentario() {
        this->texto = "";
        this->fecha = DTFecha(0,0,0);
        this->id = "nada";
    }

    DTComentario :: DTComentario(string texto, DTFecha fecha, string nuevoid) {
        this->texto = texto;
        this->fecha = fecha;
        this->id = nuevoid;
    }

    DTFecha DTComentario :: getFecha() {
        return this->fecha;
    }

    string DTComentario :: getComentario() {
        return this->texto;
    }

    string DTComentario :: getID() {
        return this->id;
    }

    DTComentario :: ~DTComentario() {} // Llevan destructor?
