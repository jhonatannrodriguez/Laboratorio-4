#include "../include/ControladorUsuario.h"

ControladorUsuario * ControladorUsuario::instancia = NULL;

ControladorUsuario :: ControladorUsuario() {}

ControladorUsuario * ControladorUsuario :: getInstancia() {
    if (instancia == NULL)
         instancia = new ControladorUsuario();
    return instancia;
}

bool ControladorUsuario :: nuevoUsuario(string nickname, string contrasenia, DTFecha fecha_nacimiento) {

}

void ControladorUsuario :: nuevoCliente(string direccion, string ciudad) {

}

void ControladorUsuario :: nuevoVendedor(string RUT) {

}

set<string> ControladorUsuario :: listarVendedores() {

}

void ControladorUsuario :: seleccionarVendedor(string nickname) {
    
}