#include "../include/Fabrica.h"

Fabrica * Fabrica::instancia = NULL;

Fabrica::Fabrica()
{

}

Fabrica::~Fabrica() 
{
    
    InterfazUsuario *iUsuario = instancia->getInterfazUsuario();
    delete iUsuario;
    
}

Fabrica * Fabrica::getInstancia() 
{
    if (instancia == NULL)
        instancia = new Fabrica();
    return instancia;
}

InterfazUsuario* Fabrica::getInterfazUsuario() 
{
    return ControladorUsuario::getInstancia();
}

