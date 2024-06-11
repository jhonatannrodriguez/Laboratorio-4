#ifndef _CONTROLADORUSUARIO_H
#define _CONTROLADORUSUARIO_H

#include "IUsuario.h"

class ControladorUsuario : public IUsuario {
    private:
        static ControladorUsuario * instancia;
        ControladorUsuario();
    public:
        static ControladorUsuario * getInstancia();
        bool nuevoUsuario();
        void nuevoCliente();
        void nuevoVendedor();
};
#endif