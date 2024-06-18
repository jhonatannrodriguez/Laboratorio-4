#ifndef _CONTROLADORPRODUCTO_H
#define _CONTROLADORPRODUCTO_H
#include "DTFecha.h"
#include "ControladorUsuario.h"
#include "DTProductoInfo.h"
#include "Producto.h"
#include "IProducto.h"
#include <map>

class ControladorUsuario; /////////////

class ControladorProducto : public IProducto {
    private:
        static ControladorProducto * instancia;
        ControladorProducto();
        int codigo;
        Producto * pRecordado;
        map <string, Producto *> coleccionProducto;
    public:
        static ControladorProducto * getInstancia();
        Producto * getpRecordado();
        int getCodigo();
         ~ControladorProducto();



        set<DTProducto*> consultarProducto();  //////////////
        DTProductoInfo* seleccionarProducto(string codigo); ///////////////
        string ingresarProducto(string nombre, float precio, unsigned int stock, string descripcion, TipoProducto categoria);
        void darAltaProducto(string codigo);
        set<DTProducto*> obtenerDTP(set<Producto*> setP);  
        void aniadirProducto(Promocion * promo, string codigo, unsigned int cantidad);   //////
        void elegirProducto(string codigo);
        map<string, DTComentario*> listarComentarios();
};
#endif