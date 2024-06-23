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
    Compra * compraRecordada;
    int idComentario;
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
    void seleccionarVendedor(string nickname);
    void asociarProducto(Producto * p);

    set<DTPromocion> consultarPromocion();
    DTVendedorInfo seleccionarPromocion(string nombre_promocion);

    set<string> crearPromocion(DTFecha vencimiento, string descripcion, string nombre, float descuento);
    set<DTProducto*> seleccionarUnVendedor(string nickname);
    void aniadirProducto(string codigo, unsigned int cantidad);
    void darDeAltaPromo();
    set<string> vendedoresNoSuscritos(string nombreCliente);
    void suscribirse(string nickname);
    set<DTNotificacion*> consultarNotificaciones(string nickname);
    void eliminarNotificaciones();
    set<string> listarVendedoresSuscritos(string nickname);
    void eliminarSuscripcion(string nickname);
    set<string> ConsultarUsuarios();
    Compra * getCompraRecordada();
    set<string> consultarClientes();
    void seleccionarCliente(string nickname);
    set<DTProducto*> seleccionarUsuario(string nickname);
    void nuevoComentario(string txt);
    int getIDComentario();
    void setIDComentario(int newID);
    set<DTComentario*> listarComentarios(string nickname);
    void eliminarComentario(string id);
    DTUsuario* ElegirUsuario(string nombre);
    set<DTPromocion*> seleccionarUnVendedorPromocion(string nombre);
    set<DTCompraInfo*> seleccionarUnCliente(string nombre);
    set<DTProducto> seleccionarVendedorEnvio (string nombre);

};


#endif