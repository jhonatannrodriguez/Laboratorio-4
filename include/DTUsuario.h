#ifndef DTUSUARIO_H
#define DTUSUARIO_H

#include <string>
#include <set>
#include "DTFecha.h"

using namespace std;

class DTUsuario {
    private:
        string nickname;
        string contrasenia;
        DTFecha fecha_nacimiento;
    public:
        DTUsuario(string nickname, DTFecha fecha_nacimiento, string contrasenia);
        DTUsuario();
        void setNickname(string);
        void setFecha_nacimiento(DTFecha);
        void setContrasenia(string);
        string getNickname();
        DTFecha getFechaNacimiento();
        string getContrasenia();
        virtual ~DTUsuario();

         
         virtual void Imprimir(ostream &o) = 0;
};

ostream &operator<<(ostream &o,  DTUsuario &u);
 
#endif