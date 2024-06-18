#include "../include/Comentario.h"

    Comentario :: Comentario() {
        this->texto = "";
        this->fecha = DTFecha(0,0,0);
        this->id = "";
    }

    Comentario :: Comentario(string texto, DTFecha fecha, string id) {
        this->texto = texto;
        this->fecha = fecha;
        this->id = id;
    }

    string Comentario :: getTexto() {
        return this->texto;
    }

    DTFecha Comentario :: getFecha() {
        return this->fecha;
    }

    string Comentario :: getId() {
        return this->id;
    }

    void Comentario :: setTexto(string texto) {
        this->texto = texto;
    }

    void Comentario :: setFecha(DTFecha fecha) {
        this->fecha = fecha;
    }

    void Comentario :: setId(string id) {
        this->id = id;
    }

    Comentario :: ~Comentario() {}