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
    for (const Usuario& usuario : this->usuarios) { //Aquí accedo directamente a travéz del "this", quizá convendría un getUsuarios(), (si no funcióna Usuario&, probar con auto&)
        nicknames.insert(usuario.getNombre());
        cout << ">" Usuario.getNombre() << endl;
    }
    return nicknames;
}