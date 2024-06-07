#ifndef _USUARIO_H
#define _USUARIO_H

#include "DTUsuario.h"
using namespace std;
#include <string>
class Usuario
{
private:
    string nombre;
    Fecha fecha_nacimiento;
    string contrasenia; 

public:
    Usuario();
    Usuario(string nombre,Fecha fecha_nacimiento,string contrasenia);
    void setNombre(string);
    void setFecha_nacimiento(Fecha);
    void setContrasenia(string);
    string getNombre();
    Fecha getFecha_nacimiento();
    string getContrasenia();
    
    virtual ~Usuario();

  
};

#endif
