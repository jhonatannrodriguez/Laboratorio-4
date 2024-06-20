#include "../include/Producto.h"

    Producto :: Producto() {
        this->codigo = "";
        this->nombre = "";
        this->descripcion = "";
        this->precio = 0;
        this->tipo = TipoProducto::otros;
        this->stock = 0;
        this->minimo = 0;
        this->enPromo = false;
        this->esta = false;
        this->cumplePromo = false;
        this->promocion = NULL;
    }

    Producto :: Producto(string nombre, float precio, unsigned int stock, string descripcion,TipoProducto tipo) {
        this->nombre = nombre;
        this->descripcion = descripcion;
        this->precio = precio;
        this->tipo = tipo;
        this->stock = stock;
        this->minimo = 0;
        this->enPromo = false;
        this->esta = false;
        this->cumplePromo = false;
        this->promocion = NULL;
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
    void Producto :: setMinimo(unsigned int minimo) {
        this->minimo = minimo;
    }

    DTProductoCompleto* Producto :: getDTPC() {
        return new DTProductoCompleto(this->codigo, this->nombre, this->descripcion, this->precio, this->tipo, this->stock);
    }

    bool Producto :: estaEnPromo() {
        return (this->promocion != NULL);
    }

    bool Producto :: verificaCantPromo(unsigned int cant) {
        return (cant >= this->minimo);
    }

    bool Producto :: getEnPromo() {
        return this->enPromo;
    }

    bool Producto :: getEsta() {
        return this->esta;
    }

    bool Producto :: getCumplePromo() {
        return this->cumplePromo;
    }

    void Producto :: setEnPromo(bool b) {
        this->enPromo = b;
    }

    void Producto :: setEsta(bool b) {
        this->esta = b;
    }

    void Producto :: setCumplePromo(bool b) {
        this->cumplePromo = b;
    }

    void Producto :: agregarComentario(Comentario* coment) {
        this->comentarios[coment->getId()] = coment; 
    }

    map<string, Comentario*> Producto :: getComentarios() {
        return this->comentarios; 
    }

    Producto :: ~Producto() {}