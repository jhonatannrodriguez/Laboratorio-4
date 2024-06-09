#ifndef DTFECHA_H
#define DTFECHA_H

using namespace std;
#include <iostream>

class DTFecha {
    private:
        int dia;
        int mes;
        int anio;
    public:
        DTFecha();
        DTFecha(int, int, int);

        void setDia(int);
        void setMes(int);
        void setAnio(int);

        int getdia();
        int getmes();
        int getanio();
        
        ~DTFecha();
} ;

ostream &operator<<(ostream &o, DTFecha &f);

#endif