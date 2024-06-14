#include "../include/ControladorProducto.h"

ControladorProducto *ControladorProducto::instancia = NULL;

ControladorProducto::ControladorProducto()
{
    this->codigo = 0;
}

//getters

ControladorProducto * ControladorProducto::getInstancia()
{
    if (instancia == NULL)
        instancia = new ControladorProducto();
    return instancia;
}

int ControladorProducto :: getCodigo() {
    return this->codigo;
}

Producto * ControladorProducto :: getpRecordado() {
    return this->pRecordado;
}

set<DTProducto> ControladorProducto :: consultarProducto() {

}

DTProductoInfo ControladorProducto :: seleccionarProducto(string codigo) {

}

string ControladorProducto :: ingresarProducto(string nombre, float precio, unsigned int stock, string descripcion, TipoProducto categoria) {
    Producto * p = new Producto(nombre, precio, stock, descripcion, categoria);
    this->pRecordado = p;
    this->codigo++;
    return to_string(this->codigo);
}

void ControladorProducto :: darAltaProducto(string codigo) {
    Producto * p = getpRecordado();
    p->setCodigo(codigo);
    ControladorUsuario * CU = ControladorUsuario::getInstancia();
    CU->asociarProducto(p);
}
