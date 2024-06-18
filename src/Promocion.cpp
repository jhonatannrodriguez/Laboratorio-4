#include "../include/Promocion.h"

    Promocion :: Promocion() {
        this->nombre = "";
        this->descripcion = "";
        this->vencimiento = DTFecha(0,0,0);
        this->descuento = 0;
    }

    Promocion :: Promocion(string nombre,string descripcion, DTFecha vencimiento,float descuento) {
        this->nombre = nombre;
        this->descripcion = descripcion;
        this->vencimiento = vencimiento;
        this->descuento = descuento;
    }
    
    string Promocion :: getNombre() {
        return this->nombre;
    }

    string Promocion :: getDescripcion() {
        return this->descripcion;
    }

    DTFecha Promocion :: getVencimiento() {
        return this->vencimiento = vencimiento;
    }

    float Promocion :: getDescuento() {
        return this->descuento = descuento;
    }

    set<Producto*> Promocion :: getProductos() {
        return this->productos;
    }

    void Promocion :: setNombre(string nombre) {
        this->nombre = nombre;
    }

    void Promocion :: setDescripcion(string descripcion) {
        this->descripcion = descripcion;
    }

    void Promocion :: setVencimiento(DTFecha vencimiento) {
        this->vencimiento = vencimiento;
    }

    void Promocion :: setDescuento(float descuento) {
        this->descuento = descuento;
    }

    void Promocion :: asociarProducto(Producto * prod, unsigned int cantidad){
        prod->setMinimo(cantidad);
        this->productos.emplace(prod);
    }

    Promocion :: ~Promocion() {
        
        this->productos.clear();
    }