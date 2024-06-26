#include "../include/Fabrica.h"

Fabrica * Fabrica::instancia = NULL;

Fabrica::Fabrica()
{

}

Fabrica::~Fabrica() 
{
    
    IUsuario *iUsuario = instancia->getIUsuario();
    delete iUsuario;

    IProducto *iProducto=instancia->getIProducto();
    delete iProducto;

    fechaSistema *fSis=instancia->getfechaSistema();
    delete fSis;
    
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

IProducto* Fabrica::getIProducto() 
{
    return ControladorProducto::getInstancia();
}

fechaSistema* Fabrica::getfechaSistema() 
{
    return fechaSistema::getInstancia();
}

