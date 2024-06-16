#ifndef _CONTROLADORUSUARIO_H
#define _CONTROLADORUSUARIO_H

#include "IUsuario.h"
#include "Usuario.h"

#include "Producto.h"
#include "Vendedor.h"
#include "Promocion"

#include "Cliente.h"

using namespace std;

class ControladorUsuario : public IUsuario
{
private:
    static ControladorUsuario* instancia;
    ControladorUsuario();
    Usuario * usuarioRecordado;
    map<string, Usuario *> coleccionUsuarios;
    map<string, Promocion *> coleccionPromociones;
    DTUsuario *datosUsuario;
   
public:

    static ControladorUsuario *getInstancia();
    ~ControladorUsuario();
    // getters
    Usuario * getusuarioRecordado();
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
};

#endif