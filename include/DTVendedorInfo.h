#ifndef DTVENDEDORINFO_H
#define DTVENDEDORINFO_H

#include "DTFecha.h"
#include "DTProducto.h"
#include <set>
#include <string>

using namespace std;

class DTVendedorInfo {
    private:
        string nicknameVendedor;
        DTFecha nacimiento;
        string RUT;
        set<DTProducto> prodInfo = {};
    public:
        DTVendedorInfo();
        DTVendedorInfo(string, DTFecha, string, set<DTProducto>);
        string getRUT();
        string getNickname();
        DTFecha getNacimiento();
        set<DTProducto> getprodInfo();
        ~DTVendedorInfo();

};

#endif