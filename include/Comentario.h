#ifndef _COMENTARIO_H
#define _COMENTARIO_H

#include "DTFecha.h"
#include <string>
#include <set>

class Producto;
class Usuario;

class Comentario {
private:
    // atributos
    string texto;
    DTFecha fecha;
    string id;
    // pseudoatributos
    set<Comentario*> respuestas;
    Usuario* usuario;
    Producto* producto;

public:
    Comentario();
    Comentario(string texto, DTFecha fecha, string id, Producto * prod, Usuario * user);
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