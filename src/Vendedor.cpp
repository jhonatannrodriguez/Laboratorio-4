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
    void Vendedor :: agregar(IObserver) {

    }
    void Vendedor :: eliminar(IObserver) {

    }
    void Vendedor :: modificar(DTNotificacion) {
        
    }

    Vendedor::~Vendedor() {}
