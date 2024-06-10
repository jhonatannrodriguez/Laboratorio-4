#include "DTUsuario.h"
        DTUsuario :: DTUsuario() {
            this->nickname = "";
            this->fecha_nacimiento = DTFecha(0,0,0);
        }

        DTUsuario :: DTUsuario(string nickname, DTFecha fecha_nacimiento) {
            this->nickname = nickname;
            this->fecha_nacimiento = fecha_nacimiento;
        }

        string DTUsuario :: getNickname() {
            return this->nickname;
        }

        DTFecha DTUsuario :: getFechaNacimiento() {
            return this->fecha_nacimiento;
        }
        DTUsuario :: ~DTUsuario() {}
