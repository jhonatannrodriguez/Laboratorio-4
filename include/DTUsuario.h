#ifndef DTUSUARIO_H
#define DTUSUARIO_H

#include <string>
#include <set>
#include "DTFecha.h"

using namespace std;

class DTUsuario {
    private:
        string nickname;
        DTFecha fecha_nacimiento;
    public:
        DTUsuario();
        DTUsuario(string nickname, DTFecha fecha_nacimiento);
        string getNickname();
        DTFecha getFechaNacimiento();
        ~DTUsuario();
};

#endif