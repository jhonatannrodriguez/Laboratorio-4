#include "../include/DTVendedor.h"

    DTVendedor :: DTVendedor() {
        this->RUT = "";
    }

    DTVendedor :: DTVendedor(string RUT) {
        this->RUT = RUT;
    }

    string DTVendedor :: getRUT() {
        return this->RUT;
    }

    DTVendedor :: ~DTVendedor() {} //Llevan destructores los DataTypes??
