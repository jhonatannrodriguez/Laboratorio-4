#include "ControladorProducto.h"

ControladorProducto * ControladorProducto::instancia = NULL;

ControladorProducto :: ControladorProducto() {}

ControladorProducto * ControladorProducto :: getInstancia() {
    if (instancia == NULL)
         instancia = new ControladorProducto();
    return instancia;
}
set<DTProducto> ControladorProducto :: consultarProducto() {
    set<DTProducto> setDTP;
    DTProducto DTP_aux;
    string c,n;
    // foreach p producto en la coleccion (seguramente un map)
    map <string, Producto> :: iterator p;
    for (p="""nombreMapa""".begin();p!="""nombreMapa""".end(); ++p) {
        c = p->second.getCodigo();
        n = p->second.getNombre();
        DTP_aux = DTProducto(c,n); //new???
        setDTP.insert(DTP_aux);
    }
    // termina el foreach creando el set que vamos a devolver, realmente no necesito que devuelve el set porque no lo voy a usar
    // Impresion en pantalla se puede hacer directamente en el foreach anterior con la siguientes lineas al final
        cout << "Codigo | Nombre" << endl;
        cout << c << " | " << n << endl;
    // Fin del foreach para la impresion en pantalla
    return setDTP;
    }
}

DTProductoInfo ControladorProducto :: seleccionarProducto(string codigo) {
    //La recorrida va a tener que ser un map
    Producto * prod = """nombreMapa""".find(codigo);
    float p = prod->getPrecio();
    unsigned int s = prod->getStock();
    string d = prod->getDescripcion();
    TipoProducto t = prod->getTipo();
    string n = prod->getVendedor()->getNickname(); // Vendedor no tiene acceso a getNickname problemas
    DTProductoInfo DTPI = DTProductoInfo(d,p,t,s,n);
    return DTPI;
}
