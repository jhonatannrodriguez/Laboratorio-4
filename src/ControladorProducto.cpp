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
        c = p.getCodigo();
        n = p.getNombre();
        DTP_aux = DTProducto(c,n); //new???
        setDTP.insert(DTP_aux);
    // termina el foreach creando el set que vamos a devolver, realmente no necesito que devuelve el set
    // porque no lo voy a usar
    // Impresion en pantalla se puede hacer directamente en el foreach anterior con la siguientes lineas al final
        cout << "Codigo | Nombre" << endl;
        cout << c << " | " << n << endl;
    // Tambien se puede hacer una estructura que recorra el set anteriormente creado e imprima en otro foreach
    cout << "Codigo | Nombre" << endl;
    for (DTProducto DTP_for : setDTP) {
        cout << DTP_for.getCodigo() << " | " << DTP_for.getNombre() << endl;
    // Fin del foreach para la impresion en pantalla
    }
}

DTProductoInfo ControladorProducto :: seleccionarProducto(string codigo) {
    //La recorrida va a tener que ser un map
}
