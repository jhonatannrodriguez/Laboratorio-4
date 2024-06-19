#ifndef DTPRODUCTO_H
#define DTPRODUCTO_H

#include <string>
#include <iostream>

using namespace std;

class DTProducto {
private:
    string codigo;
    string nombre;

public:
    DTProducto();
    DTProducto(string codigo, string nombre);
    string getNombre();
    string getCodigo();
    bool operator<(const DTProducto& otro) const {
        return nombre < otro.nombre;
    }
    
};

ostream& operator<<(ostream& os, DTProducto& prod);

#endif