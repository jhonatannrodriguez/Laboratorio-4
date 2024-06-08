#ifndef _DTCOMPRA_H
#define _DTCOMPRA_H

#include <string>
#include "DTFecha.h"

using namespace std;


class DTCompra
{
private:
    string nicknameCliente;
    DTFecha Fecha; 
public:
    DTCompra();
    DTCompra(string nicknameCliente,DTFecha Fecha);
    string getNicknameCliente();
    DTFecha getFecha();
    
  
};

#endif
