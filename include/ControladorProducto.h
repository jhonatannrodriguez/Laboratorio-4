#ifndef _CONTROLADORPRODUCTO_H
#define _CONTROLADORPRODUCTO_H
#include "DTFecha.h"
#include "DTProductoInfo.h"
#include "Producto.h"
#include "IProducto.h"
#include <map>

class ControladorProducto : public IProducto {
    private:
        static ControladorProducto * instancia;
        ControladorProducto();
        map <string, Producto *> coleccionProducto;
    public:
        static ControladorProducto * getInstancia();
        set<DTProducto> consultarProducto();
        DTProductoInfo seleccionarProducto(string codigo);
        string ingresarProducto(string nombre, float precio, unsigned int stock, string descripcion, TipoProducto categoria);
        void darAltaProducto(string codigo);
        string generarCodigo();
};
#endif