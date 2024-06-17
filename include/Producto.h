#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#include "Promocion.h"
#include "Vendedor.h"  ///////////
#include "EnumTipoProducto.h"
#include "DTProducto.h"  ////////////
#include "DTProductoInfo.h" /////////
using namespace std;
#include <string>

class Promocion;
class Vendedor;  ///////////

class Producto {
private:
    // atributos
    string codigo;
    string nombre;
    string descripcion;
    float precio;
    TipoProducto tipo;
    unsigned int stock;
    // pseudoatributos
    Promocion* promocion;
    Vendedor* vendedor; //////////
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
    Vendedor * getVendedor(); /////////
    void setCodigo(string codigo);
    void setNombre(string nombre);
    void setDescripcion(string descripcion);
    void setPrecio(float precio);
    void setTipo(TipoProducto tipo);
    void setStock(unsigned int stock);
    void setPromo(Promocion * promo);
    void setVendedor(Vendedor * vendedor); ////////
    DTProducto getDTP();
    DTProductoInfo getDTPI();  //////////
    

    ~Producto();
};

#endif
