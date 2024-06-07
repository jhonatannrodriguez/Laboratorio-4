#ifndef _DTCOMPRA_H
#define _DTCOMPRA_H

#include DTFecha.h

using namespace std;
#include <string>

class DTCompra
{
private:
    string nicknameCliente;
    DTFecha Fecha; 
public:
    DTCompra();
    DTCompra(string nicknameCliente,DTFecha Fecha);
    string getnicknameCliente();
    DTFecha getFecha();
    
  
};

#endif
