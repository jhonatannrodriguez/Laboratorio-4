#ifndef _IUSUARIO_H
#define _IUSUARIO_H
#include "DTCliente.h"
#include "DTVendedor.h"
#include "DTUsuario.h"
#include "DTProducto.h"
#include "DTPromocion.h"
#include "DTNotificacion.h"
#include <map>
#include <string>
#include <set>
using namespace std;

class IUsuario
{
public:

//Operaciones de la interface
  
    virtual bool NuevoUsuario(DTUsuario*) = 0;
    virtual void Registrar()=0;
    virtual set<DTUsuario*> ListarUsuarios()=0;
    virtual set<string> listarVendedores() = 0;
    virtual void seleccionarVendedor(string nickname) = 0;
    virtual set<DTPromocion> consultarPromocion() = 0;
    //virtual DTVendedorInfo seleccionarPromocion(string nombre_promocion) = 0;  
    virtual set<string> crearPromocion(DTFecha vencimiento, string descripcion, string nombre, float descuento) = 0;  
    virtual set<DTProducto*> seleccionarUnVendedor(string nickname) = 0;
    virtual void aniadirProducto(string codigo, unsigned int cantidad) = 0;
    virtual void darDeAltaPromo() = 0;
    virtual set<string> vendedoresNoSuscritos(string nombreCliente) = 0;
    virtual void suscribirse(string nickname) = 0;
    virtual set<DTNotificacion*> consultarNotificaciones(string nickname)=0;
    virtual void eliminarNotificaciones()=0;
   
    virtual ~IUsuario() {}  
};

#endif