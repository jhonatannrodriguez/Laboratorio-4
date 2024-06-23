#include "../include/Comentario.h"
#include "../include/Producto.h"
#include "../include/Usuario.h"


    Comentario :: Comentario() {
        this->texto = "";
        this->fecha = DTFecha(0,0,0);
        this->id = "";
        this->producto = NULL;
        this->usuario = NULL;
    }

    Comentario :: Comentario(string texto, DTFecha fecha, string id, Producto * prod, Usuario * user) {
        this->texto = texto;
        this->fecha = fecha;
        this->id = id;
        this->producto = prod;
        this->usuario = user;
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

    set<Comentario*> Comentario :: getRespuestas() {
        return this->respuestas;
    }

    void Comentario :: agregarRespuesta(Comentario * res) {
        this->respuestas.emplace(res);
    }

    Comentario :: ~Comentario() {
        if (this->producto != NULL) {
            cout << "Desvinculando Comentario de Producto..." << endl;
            this->producto->eliminarComentario(this->id);
            this->producto = NULL;
        }
        if (this->usuario != NULL) {
            cout << "Desvinculando Comentario de Usuario..." << endl;
            this->usuario->eliminarComentario(this->id);
            this->usuario = NULL;
        }
        //falta desvincular al usuario
        if (!this->respuestas.empty()) {
            for (Comentario * resp : this->respuestas)
                delete resp;
        }
    }