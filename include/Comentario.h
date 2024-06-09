#ifndef _COMENTARIO_H
#define _COMENTARIO_H

#include "DTFecha.h"
#include "Producto.h"
#include <string>
#include <set>


class Comentario {
private:
    string texto;
    DTFecha fecha;
    string id;

    set<Comentario*> respuestas;
    Comentario* padre;
    Producto* producto;

public:
    Comentario();
    Comentario(string texto, DTFecha fecha, string id);
    void setTexto(string);
    void setFecha(DTFecha);
    void setId(string);
    string getTexto();
    DTFecha getFecha();
    string getId();

    ~Comentario();
};

#endif