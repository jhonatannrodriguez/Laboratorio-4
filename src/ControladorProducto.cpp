#include "../include/ControladorProducto.h"

ControladorProducto * ControladorProducto::instancia = NULL;

ControladorProducto :: ControladorProducto() {}

ControladorProducto * ControladorProducto :: getInstancia() {
    if (instancia == NULL)
         instancia = new ControladorProducto();
    return instancia;
}

set(DTProducto) ControladorProducto::getDTProductos() {
    set(DTProducto) dtproductos;
    for (const auto& producto : this->productos) {
        dtproductos.insert(DTProducto(productos.second.getCodigo(), productos.second.getNombre()))
    }
    return dtproductos;
}

Producto* ControladorProducto::elegirProducto(string codigo) {
    if (this->productos.find(codigo) != this->productos.end()) {
        return this->productos[codigo];
    } else {
        cout << "No existe un Producto registrado con el codigo: " codigo << endl;
        return null;
    }
}