#ifndef _USUARIO_H
#define _USUARIO_H

#include "DTFecha.h"
#include "DTUsuario.h"
#include "Comentario.h"
using namespace std;
#include <string>
#include <map>

class Comentario;

class Usuario {
private:
    //Atributos
    string nickname;
    DTFecha fecha_nacimiento;
    string contrasenia; 
    //Pseudoatributos
    map<string, Comentario*> comentarios;

public:
    Usuario();
    Usuario(string nickname,DTFecha fecha_nacimiento,string contrasenia);
    void setNickname(string);
    void setFecha_nacimiento(DTFecha);
    void setContrasenia(string);
    string getNickname();
    DTFecha getFecha_nacimiento();
    string getContrasenia();
    
    void agregarComentario(Comentario* coment);
    void eliminarComentario(string id);
    map<string, Comentario*> getComentarios();
    
    virtual ~Usuario() = 0;

    virtual DTUsuario* getDTUsuario() = 0;

};

#endif
