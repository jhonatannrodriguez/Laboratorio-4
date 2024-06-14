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

set<string> ControladorUsuario :: ConsultarUsuarios() {
    set<string> nicknames;
    for (const auto& usuario : this->usuarios) {    //Aquí accedo directamente a travéz del "this", quizá convendría un getUsuarios()
        nicknames.insert(usuario.first);            //Suponiendo que la clave es el nombre
    }
    return nicknames;
}

Usuario* ControladorUsuario :: SeleccionarUsuario(string nickname) {
    if (this->usuarios.find(nickname) != this->usuarios.end()) {
        return this->usuarios[nickname];
    } else {
        cout << "No existe un Usuario registrado como: " nickname << endl;
        return null;
    }
}

DTComentario nuevoComentario(string texto, Usuario u) {
    DTFecha fechaActual = DTFecha(0,0,0);                       //Temporal
    DTComentario dtc = DTComentario(texto, fechaActual);
    string id = "NOSE"                                          //Temporal 
    Comentario coment = Comentario(texto, fechaActual, id);
    set<Comentario*> coms = this->user.getComentarios();
    coms.insert(coment*);
    return dtc;
}
