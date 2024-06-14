#ifndef _IUSUARIO_H
#define _IUSUARIO_H

#include "DTFecha.h"
#include "DTProducto"
#include "DTComentario.h"
using namespace std;
#include <string>

class IUsuario {
public:
    
    virtual bool nuevoUsuario(string nickname, string contrasenia, DTFecha fecha_nacimiento) = 0;
    virtual void nuevoCliente(string direccion, string ciudad) = 0;
    virtual void nuevoVendedor(string RUT) = 0;
    virtual set(string) ConsultarUsuarios();
    virtual Usuario* SeleccionarUsuario(string nickname);
    virtual DTComentario nuevoComentario(string texto, Usuario u);
    virtual ~IUsuario();
};

#endif