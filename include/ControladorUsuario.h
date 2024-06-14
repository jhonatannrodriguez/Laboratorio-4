#ifndef _CONTROLADORUSUARIO_H
#define _CONTROLADORUSUARIO_H

#include "IUsuario.h"
#include "Usuario.h"


#include "Vendedor.h"

#include "Cliente.h"

using namespace std;

class ControladorUsuario : public IUsuario
{
private:
    static ControladorUsuario* instancia;
    ControladorUsuario();

    map<string, Usuario *> coleccionUsuarios;
    DTUsuario *datosUsuario;
   
public:

    static ControladorUsuario *getInstancia();
    ~ControladorUsuario();
    // getters

    map<string, Usuario*> getColeccionUsuarios();

    // setters

    // Operaciones del Diagrama de Comunicacion

    bool NuevoUsuario(DTUsuario* usuario);
    void Registrar();
    set< DTUsuario *> ListarUsuarios(); // set 
    set<string> listarVendedores();
    void seleccionarVendedor(string nickname);

};

#endif