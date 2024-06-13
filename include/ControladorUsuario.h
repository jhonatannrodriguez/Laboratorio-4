#ifndef _CONTROLADORUSUARIO_H
#define _CONTROLADORUSUARIO_H

#include "IUsuario.h"
#include "Usuario.h"


class ControladorUsuario : public IUsuario {
    private:
        set(Usuario) usuarios;
        static ControladorUsuario * instancia;
        ControladorUsuario();
    public:
        static ControladorUsuario * getInstancia();
        bool nuevoUsuario(string nickname, string contrasenia, DTFecha fecha_nacimiento);
        void nuevoCliente(string direccion, string ciudad);
        void nuevoVendedor(string RUT);
        set(string) ConsultarUsuarios();
        set(DTProducto) seleccionarUsuario(string nickname);
};
#endif