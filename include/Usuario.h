#ifndef _USUARIO_H
#define _USUARIO_H

#include "DTFecha.h"
#include "DTUsuario.h"
#include "Comentario.h"
//#include "Comentario.h"
using namespace std;
#include <string>
#include <set>

class Usuario {
private:
    //Atributos
    string nickname;
    DTFecha fecha_nacimiento;
    string contrasenia; 
    //Pseudoatributos
    set<Comentario*> comentarios;  

public:
    Usuario();
    Usuario(string nickname,DTFecha fecha_nacimiento,string contrasenia);
    void setNickname(string);
    void setFecha_nacimiento(DTFecha);
    void setContrasenia(string);
    string getNickname();
    DTFecha getFecha_nacimiento();
    string getContrasenia();
    set<Comentario*> getComentarios();
    void agregarComentario(Comentario* com);
    
    virtual ~Usuario() = 0;

    virtual DTUsuario* getDTUsuario() = 0;

};



#endif
