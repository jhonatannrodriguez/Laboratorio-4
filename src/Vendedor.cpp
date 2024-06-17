#include "../include/Vendedor.h"

    Vendedor :: Vendedor() {
        this->codigo_rut = "";
    }
    Vendedor :: Vendedor(string nombre, DTFecha fecha_nacimiento, string contrasenia, string codigo_rut) {
        setNombre(nombre);
        setFecha_nacimiento(fecha_nacimiento);
        setContrasenia(contrasenia);
        this->codigo_rut = codigo_rut;
    }
    string Vendedor :: getCodigoRut() {
        return this->codigo_rut;
    }
    void Vendedor :: setCodigoRut(string codigo_rut) {
        this->codigo_rut = codigo_rut;
    }
    set<Producto*> Vendedor :: getProductos() {

    }
    void Vendedor :: agregar(IObserver * o) {
        observers.insert(o);
    }
    void Vendedor :: eliminar(IObserver * o) {
        observers.erase(o);
    }
    void Vendedor :: notificarObservadores (DTNotificacion dtn) {
        set<IObserver*>::iterator it;
        for(it = observers.begin(); it != observers.end(); ++it)
            it->notificar(dtn);
    }

    Vendedor::~Vendedor() {}
