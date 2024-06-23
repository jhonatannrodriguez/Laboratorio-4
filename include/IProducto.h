#ifndef _IPRODUCTO_H
#define _IPRODUCTO_H

#include "DTProductoCompleto.h"
#include "DTCompraInfo.h"
#include "DTProducto.h"
#include "DTProductoInfo.h"
#include "DTComentario.h"
using namespace std;
#include <string>
#include <set>


class IProducto {
public:
    virtual set<DTProducto*> consultarProducto()=0;   ////////////
    virtual DTProductoInfo* seleccionarProducto(string codigo)=0;  ////////////
    virtual string ingresarProducto(string nombre, float precio, unsigned int stock, string descripcion, TipoProducto categoria) = 0;
    virtual void darAltaProducto(string codigo) = 0;
    virtual set<DTProductoCompleto*> listarProductos() = 0;
    virtual void agregarProducto(string codigo, unsigned int cantidad) = 0;
    virtual DTCompraInfo* finalizarCompra() = 0;
    virtual set<DTComentario*> listarComentarios() = 0;
    virtual void nuevaRespuesta(string id, string respuesta) = 0;
    virtual void elegirProducto(string codigo) = 0;
    virtual set<DTCompra*> seleccionarProductoEnvio(string codigo) = 0;
    virtual void seleccionarCompra(string id) = 0;

    virtual ~IProducto() {}  
};
#endif