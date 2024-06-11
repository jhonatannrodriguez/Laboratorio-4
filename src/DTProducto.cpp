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