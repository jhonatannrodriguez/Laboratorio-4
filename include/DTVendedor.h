#ifndef DTVENDEDOR_H
#define DTVENDEDOR_H

#include <string>

using namespace std;

class DTVendedor {
    private:
        string RUT;
    public:
        DTVendedor();
        DTVendedor(string RUT);
        string getRUT();
        ~DTVendedor();
};

#endif