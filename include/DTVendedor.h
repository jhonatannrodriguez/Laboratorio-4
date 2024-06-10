#ifndef DTVENDEDOR_H
#define DTVENDEDOR_H

#include "DTUsuario.h"
#include <string>

using namespace std;

class DTVendedor : public DTUsuario {
    private:
        string RUT;
    public:
        DTVendedor();
        DTVendedor(string RUT);
        string getRUT();
        ~DTVendedor();
};

#endif