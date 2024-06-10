#include "../include/DTVendedorInfo.h"

    DTVendedorInfo :: DTVendedorInfo() {
        this->nicknameVendedor = "";
        this->nacimiento = DTFecha(0,0,0);
        this->RUT = "";
    }

    DTVendedorInfo :: DTVendedorInfo(string nickname, DTFecha nacimiento, string rut) {
        this->nicknameVendedor = nickname;
        this->nacimiento = nacimiento;
        this->RUT = rut;
    }

    string DTVendedorInfo :: getRUT() {
        return this->RUT;
    }

    string DTVendedorInfo :: getNickname() {
        return this->nicknameVendedor;
    }

    DTFecha DTVendedorInfo :: getNacimiento() {
        return this->nacimiento;
    }
    DTVendedorInfo :: ~DTVendedorInfo() {} // Llevan destructor ??