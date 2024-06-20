#ifndef _CONTROLADORPRODUCTO_H
#define _CONTROLADORPRODUCTO_H
#include "DTFecha.h"
#include "fechaSistema.h"
#include "ControladorUsuario.h"
#include "DTProductoInfo.h"
#include "Producto.h"
#include "IProducto.h"
#include "Comentario.h"
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
        DTNotificacion * crearNotificacion(Promocion* promo);
        set<DTProductoCompleto*> listarProductos();
        void agregarProducto(string codigo, unsigned int cantidad);
        DTCompraInfo* finalizarCompra();
        map<string, Producto*> getcoleccionProducto();
        void elegirProducto(string codigo);
        set<DTComentario*> listarComentarios();
        set<DTComentario*> comentariosRecursivo(set<DTComentario*> s);
        void nuevaRespuesta(string id, string respuesta);
};
#endif