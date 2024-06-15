#ifndef _CONTROLADORUSUARIO_H
#define _CONTROLADORUSUARIO_H

#include "IUsuario.h"
#include "Usuario.h"

#include "Producto.h"
#include "Vendedor.h"

#include "Cliente.h"

using namespace std;

class ControladorUsuario : public IUsuario
{
private:
    static ControladorUsuario* instancia;
    ControladorUsuario();
    Usuario * usuarioRecordado;
    map<string, Usuario *> coleccionUsuarios;
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
};

#endif