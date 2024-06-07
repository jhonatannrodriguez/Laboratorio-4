#ifndef _USUARIO_H
#define _USUARIO_H

#include DTFecha.h
using namespace std;
#include <string>
class Usuario
{
private:
    string nombre;
    DTFecha fecha_nacimiento;
    string contrasenia; 

public:
    Usuario();
    Usuario(string nombre,DTFecha fecha_nacimiento,string contrasenia);
    void setNombre(string);
    void setFecha_nacimiento(DTFecha);
    void setContrasenia(string);
    string getNombre();
    DTFecha getFecha_nacimiento();
    string getContrasenia();
    
    virtual ~Usuario();

  
};

#endif
