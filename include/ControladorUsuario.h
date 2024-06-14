#ifndef _CONTROLADORUSUARIO_H
#define _CONTROLADORUSUARIO_H

#include "IUsuario.h"
#include "Usuario.h"

class ControladorUsuario : public IUsuario {
    private:
        static ControladorUsuario * instancia;
        ControladorUsuario();
        map <string, Usuario*> coleccionUsuario;
        map <string, Promocion*> coleccionPromocion;
    public:
        static ControladorUsuario * getInstancia();
        bool nuevoUsuario(string nickname, string contrasenia, DTFecha fecha_nacimiento);
        void nuevoCliente(string direccion, string ciudad);
        void nuevoVendedor(string RUT);
};
#endif