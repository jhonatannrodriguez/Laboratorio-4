#include "../include/ControladorProducto.h"

ControladorProducto * ControladorProducto::instancia = NULL;

ControladorProducto :: ControladorProducto() {}

ControladorProducto * ControladorProducto :: getInstancia() {
    if (instancia == NULL)
         instancia = new ControladorProducto();
    return instancia;
}

string ControladorProducto :: ingresarProducto(string nombre, float precio, unsigned int stock, string descripcion, TipoProducto categoria) {

}
void ControladorProducto :: darAltaProducto(string codigo) {
    
}