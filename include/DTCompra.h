#ifndef _DTCOMPRA_H
#define _DTCOMPRA_H

#include <string>
#include "DTFecha.h"

using namespace std;


class DTCompra
{
private:
    DTFecha fecha; 
    string nombre;
    string ID;

public:
    DTCompra();
    DTCompra(DTFecha fecha, string nombre, string ID);
    string getNombre();
    DTFecha getFecha();
    string getID();
    ~DTCompra();
  
};
ostream& operator<<(ostream& os,  DTCompra& prod);

#endif