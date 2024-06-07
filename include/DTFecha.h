#ifndef DTFECHA_H
#define DTFECHA_H

using namespace std;

class DTFecha {
    private:
        int dia;
        int mes;
        int anio;
    public:
        DTFecha();
        DTFecha(int, int, int);
        int getdia();
        int getmes();
        int getanio();
        
        ~DTFecha();
} ;

#endif