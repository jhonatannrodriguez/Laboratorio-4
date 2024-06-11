#ifndef _USUARIO_H
#define _USUARIO_H

#include "DTFecha.h"
#include "Comentario.h"
using namespace std;
#include <string>
#include <set>

class Usuario {
private:
    //Atributos
    string nombre;
    DTFecha fecha_nacimiento;
    string contrasenia; 
    //Pseudoatributos
    set<Comentario*> comentario;  

public:
    Usuario();
    Usuario(string nombre,DTFecha fecha_nacimiento,string contrasenia); 
    void setNombre(string);
    void setFecha_nacimiento(DTFecha);
    void setContrasenia(string);
    string getNombre();
    DTFecha getFecha_nacimiento();
    string getContrasenia();
    
    set<Comentario*> getComentarios();
    
    virtual ~Usuario() = 0;
};

#endif
