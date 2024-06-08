#ifndef DTPRODUCTOCOMPLETO_H
#define DTPRODUCTOCOMPLETO_H

#include <string>
#include "EnumTipoProducto.h"

using namespace std;

class DTProductoCompleto {
private:
    string codigo;
    string nombre;
    string descripcion;
    float precio;
    TipoProducto tipo;
    unsigned int stock;

public:
    DTProductoCompleto();
    DTProductoCompleto(string codigo, string nombre, string descripcion, float precio, TipoProducto tipo, unsigned int stock);
    string getCodigo();
    string getNombre();
    string getDescripcion();
    float getPrecio();
    TipoProducto getTipo();
    unsigned int getStock();
    ~DTProductoCompleto();
};

#endif
