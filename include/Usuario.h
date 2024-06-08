#ifndef _USUARIO_H
#define _USUARIO_H

#include "DTFecha.h"
#include "Comentario.h"
using namespace std;
#include <string>

class Usuario {
private:
    //Atributos
    string nombre;
    DTFecha fecha_nacimiento;
    string contrasenia; 
    //Pseudoatributos
    set(Comentario*) comentario;  //<--- Supongamos que es asi con el set()

public:
    Usuario();
    Usuario(string nombre,DTFecha fecha_nacimiento,string contrasenia);
    void setNombre(string);
    void setFecha_nacimiento(DTFecha);
    void setContrasenia(string);
    string getNombre();
    DTFecha getFecha_nacimiento();
    string getContrasenia();
    
    set(Cometario*) getComentarios();
    
    virtual ~Usuario();
};

#endif
