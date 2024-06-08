#ifndef DTPRODUCTO_H
#define DTPRODUCTO_H

#include <string>

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
};

#endif