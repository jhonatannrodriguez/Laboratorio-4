#ifndef _INTERFAZUSUARIO_H
#define _INTERFAZUSUARIO_H
#include "DTCliente.h"
#include "DTVendedor.h"
#include "DTUsuario.h"
#include <map>
#include <string>
#include <set>
using namespace std;

class InterfazUsuario
{
public:

//Operaciones de la interface
  
    virtual bool NuevoUsuario(DTUsuario*) = 0;
    virtual void Registrar()=0;
    virtual set<DTUsuario *> ListarUsuarios()=0;
   
    
   
   
    virtual ~InterfazUsuario()
    
   
    {

    }  
};

#endif