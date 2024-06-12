#ifndef _CONTROLADORUSUARIO_H
#define _CONTROLADORUSUARIO_H

#include "IUsuario.h"
#include "Usuario.h"

#include "Vendedor.h"

#include "Cliente.h"

using namespace std;

class ControladorUsuario : public InterfazUsuario
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


    virtual bool NuevoUsuario(DTUsuario* usuario);
    virtual void Registrar();
    virtual set< DTUsuario *> ListarUsuarios(); // set 
   


    



};

#endif