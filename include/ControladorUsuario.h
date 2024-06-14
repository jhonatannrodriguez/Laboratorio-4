#ifndef _CONTROLADORUSUARIO_H
#define _CONTROLADORUSUARIO_H

#include "IUsuario.h"
#include "IProducto.h"
#include "Usuario.h"
#include "Producto.h"
#include <map>


class ControladorUsuario : public IUsuario {
    private:
        map<string, Usuario*> usuarios;
        static ControladorUsuario * instancia;
        ControladorUsuario();
    public:
        static ControladorUsuario * getInstancia();
        bool nuevoUsuario(string nickname, string contrasenia, DTFecha fecha_nacimiento);
        void nuevoCliente(string direccion, string ciudad);
        void nuevoVendedor(string RUT);
        set(string) ConsultarUsuarios();
        Usuario* SeleccionarUsuario(string nickname);
        DTComentario nuevoComentario(string texto, Usuario u);
};
#endif