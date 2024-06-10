#ifndef DTPRODUCTOINFO_H
#define DTPRODUCTOINFO_H

#include <string>
#include "EnumTipoProducto.h"

using namespace std;

class DTProductoInfo {
private:
    string descripcion;
    float precio;
    TipoProducto tipo;
    unsigned int stock;
    string nicknameVendedor;

public:
    DTProductoInfo();
    DTProductoInfo(string descripcion, float precio, TipoProducto tipo, unsigned int stock, string nicknameVendedor);
    string getDescripcion();
    float getPrecio();
    TipoProducto getTipo();
    unsigned int getStock();
    string getNicknameVendedor();
    ~DTProductoInfo();
};

#endif