#ifndef _VENDEDOR_H
#define _VENDEDOR_H

#include "Usuario.h"
#include "DTVendedor.h"
#include "Producto.h"
//#include "IObserver.h"
#include "DTNotificacion.h"
#include "Promocion.h"
class Producto;
class Promocion;

class Vendedor : public Usuario {
private:
    //Atributos
    string codigo_rut;
    //Pseudoatributos
    set<Producto*> productos;
    set<Promocion*> promocion;
    //set<IObserver*> observers;
    void notificarObservadores(DTNotificacion dtn);

public:
    Vendedor();
    Vendedor(string nickname,DTFecha fecha_nacimiento ,string contrasenia, string codigo_rut);
    void setCodigoRut(string);
    string getCodigoRut();
    void asociarProducto(Producto * p);

    set<Producto*> getProductos();
    //void agregar(IObserver* o);
    //void eliminar(IObserver* o);

    ~Vendedor();
    
    DTVendedor *getDTVendedor();
    virtual DTUsuario* getDTUsuario();
};

#endif