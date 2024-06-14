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

set(string) ControladorUsuario :: ConsultarUsuarios() {
    set(string) nicknames;
    for (const auto& usuario : this->usuarios) { //Aquí accedo directamente a travéz del "this", quizá convendría un getUsuarios()
        nicknames.insert(usuario.first);         //Suponiendo que la clave es el nombre
        cout << usuario.first << endl; 
    }
    return nicknames;
}

set(DTProducto) ControladorUsuario :: SeleccionarUsuario(string nickname, IProducto iproducto) {
    return iproducto.getDTProductos();
}
