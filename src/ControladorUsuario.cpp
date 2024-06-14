#include "../include/ControladorUsuario.h"

ControladorUsuario * ControladorUsuario::instancia = NULL;

ControladorUsuario :: ControladorUsuario() {}

ControladorUsuario * ControladorUsuario :: getInstancia() {
    if (instancia == NULL)
         instancia = new ControladorUsuario();
    return instancia;
}

bool ControladorUsuario :: nuevoUsuario(string nickname, string contrasenia, DTFecha fecha_nacimiento) {

}

void ControladorUsuario :: nuevoCliente(string direccion, string ciudad) {

}

void ControladorUsuario :: nuevoVendedor(string RUT) {

}

set<DTPromocion> ControladorUsuario::consultarPromocion() {
    set<DTPromocion> promociones;
    for (const auto& promocion : this->promocion) {
        DTPromocion prom(promocion.second.getVencimiento(), 
                        promocion.second.getDescripcion(), 
                        promocion.second.getNombre(), 
                        promocion.second.getDescuento());
        promociones.insert(prom);
    }
    return promociones;
}

DTVendedorInfo ControladorUsuario :: seleccionarPromocion(string nombre_promocion){
    
}