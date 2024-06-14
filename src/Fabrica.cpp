#include "../include/Fabrica.h"

Fabrica * Fabrica::instancia = NULL;

Fabrica::Fabrica()
{

}

Fabrica::~Fabrica() 
{
    
    IUsuario *iUsuario = instancia->getIUsuario();
    delete iUsuario;
    
}

Fabrica * Fabrica::getInstancia() 
{
    if (instancia == NULL)
        instancia = new Fabrica();
    return instancia;
}

IUsuario* Fabrica::getIUsuario() 
{
    return ControladorUsuario::getInstancia();
}

