#ifndef DTCOMENTARIO_H
#define DTCOMENTARIO_H

#include "DTFecha.h"
#include <string>

using namespace std;

class DTComentario {
    private:
        string texto;
        DTFecha fecha;
        string id;
    public:
        DTComentario();
        DTComentario(string texto, DTFecha fecha, string nuevoid);
        DTFecha getFecha();
        string getComentario();
        string getID();
        ~DTComentario();
} ;

#endif