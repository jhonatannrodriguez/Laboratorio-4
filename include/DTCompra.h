#ifndef _DTCOMPRA_H
#define _DTCOMPRA_H

#include <string>
#include "DTFecha.h"

using namespace std;


class DTCompra
{
private:
    string nicknameCliente;
    DTFecha fecha; 
public:
    DTCompra();
    DTCompra(string nicknameCliente,DTFecha fecha);
    string getNicknameCliente();
    DTFecha getFecha();
    ~DTCompra();
  
};

#endif