#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#include "Promocion.h"
#include "EnumTipoProducto.h"
using namespace std;
#include <string>

class Promocion;
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
    void setCodigo(string codigo);
    void setNombre(string nombre);
    void setDescripcion(string descripcion);
    void setPrecio(float precio);
    void setTipo(TipoProducto tipo);
    void setStock(unsigned int stock);
    void setPromo(Promocion * promo);
    DTProducto getDTP();

    ~Producto();
};

#endif
