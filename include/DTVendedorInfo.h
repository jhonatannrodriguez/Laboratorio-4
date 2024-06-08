#ifndef DTVENDEDORINFO_H
#define DTVENDEDORINFO_H

#include "DTFecha.h"
#include <string>

using namespace std;

class DTVendedorInfo {
    private:
        string nicknameVendedor;
        DTFecha nacimiento;
        string RUT;
    public:
        DTVendedorInfo(string, DTFecha, string);
        DTVendedorInfo();
        string getRUT();
        string getNickname();
        DTFecha getNacimiento();

};

#endif