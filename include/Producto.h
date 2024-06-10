#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#include "Promocion.h"
using namespace std;
#include <string>

enum class TipoProducto {
    ropa,
    electrodomesticos,
    otros
};

class Promocion;
class Producto {
private:
    string codigo;
    string nombre;
    string descripcion;
    float precio;
    TipoProducto tipo;
    unsigned int stock;

    Promocion* promocion;
public:
    Producto();
    Producto(string codigo,string nombre,string descripcion,float precio,TipoProducto tipo, unsigned int stock);
    string getCodigo();
    string getNombre();
    string getDescripcion();
    float getPrecio();
    TipoProducto getTipo();
    unsigned int getStock();
    void setCodigo(string codigo);
    void setNombre(string nombre);
    void setDescripcion(string descripcion);
    void setPrecio(float precio);
    void setTipo(TipoProducto tipo);
    void setStock(unsigned int stock);

    ~Producto();
};

#endif
