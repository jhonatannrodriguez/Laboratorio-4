#ifndef _CONTROLADORUSUARIO_H
#define _CONTROLADORUSUARIO_H

#include "IUsuario.h"
#include "Usuario.h"
#include "DTVendedorInfo.h"
#include "DTProducto.h"
#include "DTPromocion.h"
#include "Producto.h"
#include "Vendedor.h"
#include "Promocion.h"
#include "DTFecha.h"
#include "ControladorProducto.h"   /////////

#include "Cliente.h"

class ControladorProducto; /////////////

using namespace std;

class ControladorUsuario : public IUsuario
{
private:
    static ControladorUsuario* instancia;
    ControladorUsuario();
    Usuario * usuarioRecordado;
    Promocion * promocionRecordada;
    map<string, Usuario *> coleccionUsuarios;
    map<string, Promocion *> coleccionPromociones;
    DTUsuario *datosUsuario;
   
public:

    static ControladorUsuario *getInstancia();
    ~ControladorUsuario();
    // getters
    Usuario * getusuarioRecordado();
    Promocion * getPromocionRecordada();
    map<string, Usuario*> getColeccionUsuarios();

    // setters

    // Operaciones del Diagrama de Comunicacion

    bool NuevoUsuario(DTUsuario* usuario);
    void Registrar();
    set< DTUsuario *> ListarUsuarios(); // set 
    set<string> listarVendedores();
    set<string> consultarUsuarios();
    void seleccionarVendedor(string nickname);
    void seleccionarUsuario(string nickname);
    void asociarProducto(Producto * p);

   set<DTPromocion> consultarPromocion();
    //DTVendedorInfo seleccionarPromocion(string nombre_promocion);

    set<string> crearPromocion(DTFecha vencimiento, string descripcion, string nombre, float descuento);
    set<DTProducto*> seleccionarUnVendedor(string nickname);
    void aniadirProducto(string codigo, unsigned int cantidad);
    void darDeAltaPromo();
};

#endif