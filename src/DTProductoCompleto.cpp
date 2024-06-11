#include "../include/DTProductoCompleto.h"

    DTProductoCompleto :: DTProductoCompleto() {
        this->codigo = "";
        this->nombre = "";
        this->descripcion = "";
        this->precio = 0;
        this->tipo = TipoProducto::otros; 
        this->stock = 0;
    }

    DTProductoCompleto :: DTProductoCompleto(string codigo, string nombre, string descripcion, float precio, TipoProducto tipo, unsigned int stock) {
        this->codigo = codigo;
        this->nombre = nombre;
        this->descripcion = descripcion;
        this->precio = precio;
        this->tipo = tipo;
        this->stock = stock;
    }

    string DTProductoCompleto :: getCodigo() {
        return this->codigo;
    }

    string DTProductoCompleto :: getNombre() {
        return this->nombre;
    }

    string DTProductoCompleto :: getDescripcion() {
        return this->descripcion;
    }

    float DTProductoCompleto :: getPrecio() {
        return this->precio;
    }

    TipoProducto DTProductoCompleto :: getTipo() {
        return this->tipo;
    }

    unsigned int DTProductoCompleto :: getStock() {
        return this->stock;
    }
    
    DTProductoCompleto :: ~DTProductoCompleto() {} // Llevan destructor??
