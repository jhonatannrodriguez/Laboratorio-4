#include "../include/ControladorProducto.h"

ControladorProducto * ControladorProducto::instancia = NULL;

ControladorProducto :: ControladorProducto() {}

ControladorProducto * ControladorProducto :: getInstancia() {
    if (instancia == NULL)
         instancia = new ControladorProducto();
    return instancia;
}
set(DTProducto) getDTProductos() {
    set(DTProducto) dtproductos;
    for (const auto& producto : this->productos) {
        dtproductos.insert(DTProducto(productos.second.getCodigo(), productos.second.getNombre()))
    }
    return dtproductos;
}