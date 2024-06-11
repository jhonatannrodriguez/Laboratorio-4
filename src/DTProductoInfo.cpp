#include "../include/DTProductoInfo.h"

    DTProductoInfo :: DTProductoInfo() {
        this->descripcion = "";
        this->precio = 0;
        this->tipo = TipoProducto::otros;
        this->stock = 0;
        this->nicknameVendedor = "";
    }

    DTProductoInfo :: DTProductoInfo(string descripcion, float precio, TipoProducto tipo, unsigned int stock, string nicknameVendedor) {
        this->descripcion = descripcion;
        this->precio = precio;
        this->tipo = tipo;
        this->stock = stock;
        this->nicknameVendedor = nicknameVendedor;
    }

    string DTProductoInfo :: getDescripcion() {
        return this->descripcion;
    }

    float DTProductoInfo :: getPrecio() {
        return this->precio;
    }

    TipoProducto DTProductoInfo :: getTipo() {
        return this->tipo;
    }

    unsigned int DTProductoInfo :: getStock() {
        return this->stock;
    }

    string DTProductoInfo :: getNicknameVendedor() {
        return this->nicknameVendedor;
    }
    DTProductoInfo :: ~DTProductoInfo() {} // Llevan destructor los DT???