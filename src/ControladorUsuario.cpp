#include "../include/ControladorUsuario.h"

ControladorUsuario * ControladorUsuario::instancia = NULL;

ControladorUsuario :: ControladorUsuario() {}

ControladorUsuario * ControladorUsuario :: getInstancia() {
    if (instancia == NULL)
         instancia = new ControladorUsuario();
    return instancia;
}

bool ControladorUsuario :: nuevoUsuario() {

}

void ControladorUsuario :: nuevoCliente() {

}

void ControladorUsuario :: nuevoVendedor() {

}