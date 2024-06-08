#ifndef DTCOMENTARIO_H
#define DTCOMENTARIO_H

#include "DTFecha.h"
#include <string>

using namespace std;

class DTComentario {
    private:
        string texto;
        DTFecha fecha;
    public:
        DTComentario();
        DTComentario(string texto, DTFecha fecha);
        DTFecha getFecha();
        string getComentario();
} ;

#endif