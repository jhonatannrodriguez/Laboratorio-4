#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#include "Promocion.h"
#include "Comentario.h"
#include "Compra.h"
#include "EnumTipoProducto.h"
#include "DTProducto.h"  
#include "DTProductoInfo.h" 
#include "DTProductoCompleto.h"
using namespace std;
#include <string>
#include <map>
#include <set>

class Compra;
class Promocion;
class Vendedor;  
class Comentario;

class Producto {
private:
    // atributos
    string codigo;
    string nombre;
    string descripcion;
    float precio;
    TipoProducto tipo;
    unsigned int stock;
    unsigned int minimo;
    bool enPromo, esta, cumplePromo;
    // pseudoatributos
    Promocion* promocion;
    Vendedor* vendedor;
    map<string, Comentario*> comentarios;
    set<Compra*> setCompras = {};

public:
    Producto();
    Producto(string nombre, float precio, unsigned int stock, string descripcion,TipoProducto tipo);
    string getCodigo();
    string getNombre();
    string getDescripcion();
    float getPrecio();
    Promocion * getPromo();
    TipoProducto getTipo();
    unsigned int getStock();
    Vendedor * getVendedor();
    set<Compra*> getCompras();
    void agregarCompra(Compra* compra);
    void setCodigo(string codigo);
    void setNombre(string nombre);
    void setDescripcion(string descripcion);
    void setPrecio(float precio);
    void setTipo(TipoProducto tipo);
    void setStock(unsigned int stock);
    void setPromo(Promocion * promo);
    void setVendedor(Vendedor * vendedor);
    void setMinimo(unsigned int minimo);
    DTProducto* getDTP();
    DTProductoInfo *getDTPI();

    DTProductoCompleto * getDTPC();
    bool estaEnPromo();
    bool verificaCantPromo(unsigned int cant);
    bool getEnPromo();
    bool getEsta();
    bool getCumplePromo();
    void setEnPromo(bool b);
    void setEsta(bool b);
    void setCumplePromo(bool b);

    void agregarComentario(Comentario* coment);
    map<string, Comentario*> getComentarios();
    void eliminarComentario(string id);

    ~Producto();
};

#endif
