#include "ControladorProducto.h"

ControladorProducto * ControladorProducto::instancia = NULL;

ControladorProducto :: ControladorProducto() {}

ControladorProducto * ControladorProducto :: getInstancia() {
    if (instancia == NULL)
         instancia = new ControladorProducto();
    return instancia;
}
set<DTProducto> ControladorProducto :: consultarProducto() {
    
}

DTProductoInfo ControladorProducto :: seleccionarProducto(string codigo) {

}
