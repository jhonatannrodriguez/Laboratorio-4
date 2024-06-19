#include "../include/DTVendedorInfo.h"

    DTVendedorInfo :: DTVendedorInfo() {
        this->nicknameVendedor = "";
        this->nacimiento = DTFecha(0,0,0);
        this->RUT = "";
        this->prodInfo = {};
    }

    DTVendedorInfo :: DTVendedorInfo(string nickname, DTFecha nacimiento, string rut, set<DTProducto> prod) {
        this->nicknameVendedor = nickname;
        this->nacimiento = nacimiento;
        this->RUT = rut;
        this->prodInfo = prod;
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

    set<DTProducto> DTVendedorInfo :: getprodInfo(){
        return this->prodInfo;
    }
    DTVendedorInfo :: ~DTVendedorInfo() {} // Llevan destructor ??