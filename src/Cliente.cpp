#include "../include/Cliente.h"

    Cliente :: Cliente(){
        this->calle = "";
        this->numero_puerta=0;
        this->ciudad_residencia="";
    }

    Cliente :: Cliente(string nombre, DTFecha fecha_nacimiento, string contrasenia, string calle, int numero_puerta, string ciudad_residencia) {
        setNombre(nombre);
        setFecha_nacimiento(fecha_nacimiento);
        setContrasenia(contrasenia);
        this->calle = calle;
        this->numero_puerta = numero_puerta;
        this-> ciudad_residencia = ciudad_residencia;
    }
    string Cliente :: getCalle() {
        return this->calle;
    }
    int Cliente :: getNumeroPuerta() {
        return this->numero_puerta;
    }
    string Cliente :: getCiudadResidencia() {
        return this->ciudad_residencia;
    }

    void Cliente :: setCalle(string calle) {
        this->calle = calle;
    }
    void Cliente :: setNumeroPuerta(int numero_puerta) {
        this->numero_puerta = numero_puerta;
    }
    void Cliente :: setCiudadResidencia(string ciudad_residencia) {
        this->ciudad_residencia = ciudad_residencia;
    }
    
    void Cliente :: notificar(DTNotificacion dtn) {
        // No se que tiene que hacer aca
    }
    //void suscribirse(Vendedor);
    //set<Vendedor*> getSuscritos(); 
    //void eliminarNotificaciones();

    Cliente::~Cliente() {}

