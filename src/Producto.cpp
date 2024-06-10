#include "../include/Producto.h"

    Producto :: Producto() {
        this->codigo = "";
        this->nombre = "";
        this->descripcion = "";
        this->precio = 0;
        this->tipo = "otros"; // No se como inicializar un tipoproducto default
        this->stock = 0;
    }

    Producto :: Producto(string codigo,string nombre,string descripcion,float precio,TipoProducto tipo, unsigned int stock) {
        this->codigo = codigo;
        this->nombre = nombre;
        this->descripcion = descripcion;
        this->precio = precio;
        this->tipo = tipo;
        this->stock = stock;
    }

    string Producto :: getCodigo() {
        return this->codigo;
    }

    string Producto :: getNombre() {
        return this->nombre;
    }

    string Producto :: getDescripcion() {
        return this->descripcion;
    }

    float Producto :: getPrecio() {
        return this->precio;
    }

    TipoProducto Producto :: getTipo() {
        return this->tipo;
    }

    unsigned int Producto :: getStock() {
        return this->stock;
    }

    void Producto :: setCodigo(string codigo) {
        this->codigo = codigo;
    }

    void Producto :: setNombre(string nombre) {
        this->nombre = nombre;
    }

    void Producto :: setDescripcion(string descripcion) {
        this->descripcion = descripcion;
    }

    void Producto :: setPrecio(float precio) {
        this->precio = precio;
    }

    void Producto :: setTipo(TipoProducto tipo) {
        this->tipo = tipo;
    }

    void Producto :: setStock(unsigned int stock) {
        this->stock = stock;
    }

    Producto :: ~Producto() {}