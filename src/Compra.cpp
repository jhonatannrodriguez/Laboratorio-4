#include "../include/Compra.h"

    Compra :: Compra() {
        this->fecha = DTFecha(0,0,0);
        this->monto = 0;
    }

    Compra :: Compra(DTFecha fecha,float monto) {
        this->fecha = fecha;
        this->monto = monto;
    }

    float Compra :: getMonto() {
        return this->monto;
    }

    DTFecha Compra :: getFecha() {
        return this->fecha;
    }

    void Compra :: setMonto(float monto) {
        this->monto = monto;
    }

    void Compra :: setFecha(DTFecha fecha) {
        this->fecha = fecha;
    }

    DTCompra* Compra :: getDTCompra(){
        DTCompra *dt = new DTCompra( getMonto(), getFecha());
        return dt;

    }

    void Compra :: asignarCantidad(Producto * p, unsigned int cantidad) {
        cp * cProd = new cp;
        cProd->cantidad = cantidad;
        cProd->producto = p;
        this->productos.emplace(cProd);
    }

    set<cp*> Compra :: getProductos() {
        return this->productos; 
    }

    unsigned int Compra :: cantProducto(Producto * p) {
        unsigned int res;
        for(cp * cP : this->productos) {
            if (cP->producto == p) {
                res = cP->cantidad;
                break;
            }
        }
        return res;
    }

    Compra :: ~Compra() {
        for(cp * cP : this->productos) {
            delete cP;
        }
        this->productos.clear();
    }