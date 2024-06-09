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
    void setCodigo(string);
    void setNombre(string);
    void setDescripcion(string);
    void setPrecio(float);
    void setTipo(TipoProducto);
    void setStock(unsigned int);
    string getCodigo();
    string getNombre();
    string getDescripcion();
    float getPrecio();
    TipoProducto getTipo();
    unsigned int getStock();

    ~Producto();
};

#endif
