#ifndef _CONTROLADORUSUARIO_H
#define _CONTROLADORUSUARIO_H

#include "IUsuario.h"
#include "Promocion.h"
#include <map>

class ControladorUsuario : public IUsuario {
    private:
        map<string, Promocion*> promociones;
        static ControladorUsuario * instancia;
        ControladorUsuario();
    public:
        static ControladorUsuario * getInstancia();
        bool nuevoUsuario(string nickname, string contrasenia, DTFecha fecha_nacimiento);
        void nuevoCliente(string direccion, string ciudad);
        void nuevoVendedor(string RUT);
        set<DTPromocion> consultarPromocion();
        DTVendedorInfo seleccionarPromocion(string nombre_promocion);
};
#endif