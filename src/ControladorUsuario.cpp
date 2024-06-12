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

set<DTPromocion> ControladorUsuario :: consultarPromocion(){
    set<DTPromocion> promociones;


    return promociones;
}

DTVendedorInfo ControladorUsuario :: seleccionarPromocion(string nombre_promocion){

}