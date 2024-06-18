#include "../include/Producto.h"

    Producto :: Producto() {
        this->codigo = "";
        this->nombre = "";
        this->descripcion = "";
        this->precio = 0;
        this->tipo = TipoProducto::otros;
        this->stock = 0;
    }

    Producto :: Producto(string nombre, float precio, unsigned int stock, string descripcion,TipoProducto tipo) {
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

    DTProducto* Producto :: getDTP(){
        return new DTProducto(this->codigo, this->nombre);
    }
    /////////
    DTProductoInfo* Producto :: getDTPI() {
        return new DTProductoInfo(this->descripcion,this->precio,this->tipo,this->stock,this->getVendedor()->getNickname());
    }
    /////////
    Promocion * Producto :: getPromo(){
        return this->promocion;
    }

    void Producto :: setPromo(Promocion * promo){
        this->promocion = promo;
    }
    ////////
    Vendedor * Producto :: getVendedor() {
        return this->vendedor;
    }

    void Producto :: setVendedor(Vendedor * vendedor) {
        this->vendedor = vendedor;
    }
    //////////

    map<string, Comentario*> Producto :: getComentarios() {
        return this->comentarios;
    }

    void Producto :: agregarComentario(Comentario* coment) {
        this->comentarios[coment->getId] = coment;
    }

    Producto :: ~Producto() {}