#ifndef _COMENTARIO_H
#define _COMENTARIO_H

#include "DTFecha.h"
#include <string>
#include <set>

class Producto;

class Comentario {
private:
    // atributos
    string texto;
    DTFecha fecha;
    string id;
    // pseudoatributos
    set<Comentario*> respuestas;
    Comentario* padre;
    Producto* producto;

public:
    Comentario();
    Comentario(string texto, DTFecha fecha, string id, Producto * prod);
    string getTexto();
    DTFecha getFecha();
    string getId();
    void setTexto(string texto);
    void setFecha(DTFecha fecha);
    void setId(string id);
    set<Comentario*> getRespuestas();
    void agregarRespuesta(Comentario * coment);

    ~Comentario();
};

#endif