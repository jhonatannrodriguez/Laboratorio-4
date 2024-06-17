#include "../include/DTProducto.h"

DTProducto::DTProducto(){
  this->codigo = "";
  this->nombre = "";
}

DTProducto::DTProducto(string codigo, string nombre){
  this->codigo = codigo;
  this->nombre = nombre;
}

string DTProducto::getCodigo(){
    return this->codigo;
}

string DTProducto::getNombre(){
    return this->nombre;
}

  /*  ostream& operator<<(ostream& os, const DTProducto&   prod) {
    os << "Nombre: " << prod.getNombre() << "\n"
       << "Codigo: " << prod.getCodigo() <<endl;
    return os;
} */