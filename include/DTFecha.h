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

        bool operator<(DTFecha);
} ;

ostream &operator<<(ostream &o, DTFecha f);

ostream &operator>>(ostream &o, DTFecha f); // revisar (DTFecha &f) o (DTFecha f) esta mal??

#endif