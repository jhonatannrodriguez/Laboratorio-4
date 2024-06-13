
#include <iostream>
#include "../include/Fabrica.h"
using namespace std;

int main()
{
    Fabrica * fabrica = Fabrica::getInstancia();
    IUsuario * iUsuario = fabrica->getIUsuario();
    IProducto * iProducto = fabrica->getIProducto();

    int opcion;
    cout << "Elija una opción:" << endl;
    cout << "0: Cargar de Datos de Prueba." << endl;
    cout << "1: Alta de Usuario." << endl;
    cout << "2: Listado de Usuarios." << endl;
    cout << "3: Alta de producto." << endl;
    cout << "4: Consultar producto." << endl;
    cout << "5: Crear promoción." << endl;
    cout << "6: Consultar promoción." << endl;
    cout << "7: Realizar compra." << endl;
    cout << "8: Dejar comentario." << endl;
    cout << "9: Eliminar comentario." << endl;
    cout << "10: Enviar producto." << endl;
    cout << "11: Expediente de Usuario." << endl;
    cout << "12: Suscribirse a notificaciones." << endl;
    cout << "13: Consulta de notificaciones ." << endl;
    cout << "14: Eliminar suscripciones. " << endl;
    cout << "15: Ayuda. " << endl;
    cout << "16: Salir. " << endl;
    
    

    do
    {
        cin >> opcion;
        switch (opcion)
        {
            case 0:
            {
           
            }
            case 1: 
            {
            
            }
            case 2: 
            {
            ;
            }
            case 3: 
            {
            
            }
            case 4: 
            {
                cout << "Estos son los productos disponibles:" << endl;
                set<DTProducto> setDTP = iProducto->consultarProducto();
                // Tambien se puede imprimir acá usando el set pasado anteriormente
                cout << "Codigo | Nombre" << endl;
                for (DTProducto DTP_for : setDTP) {
                cout << DTP_for.getCodigo() << " | " << DTP_for.getNombre() << endl;
                }
                cout << "Ingrese el código del producto del cual desea información." << endl;
                string codigo;
                cin >> codigo;
                DTProductoInfo DTPI = iProducto->seleccionarProducto(codigo);
                //Mismo que antes puedo imprimir aca la información del producto o dentro de la función
                cout << "Precio: " << DTPI.getPrecio() << endl
                     << "Stock: " << DTPI.getStock() << endl
                     << "Descripción: " << DTPI.getDescripcion() << endl
                     << "Categoría: " << DTPI.getTipo() << endl // Supongo que falta sobrecarga de la funcion to_string
                     << "Nickname del vendedor: " << DTPI.getNicknameVendedor() << endl;
            }
            case 5: 
            {
            
            }
            case 6:
            {
           
            }
            case 7:
            {
           
            }
            case 8: 
            {
           
            }
            case 9: 
            {
           
            }
            case 10: 
            {
            
            }
            case 11: 
            {
            
            }
            case 12: 
            {
            
            }
            case 13: 
            {
           
            }
            case 14: 
            {
          
            }
            case 15:
            {
            cout << "0: Cargar de Datos de Prueba." << endl;
            cout << "1: Alta de Usuario." << endl;
            cout << "2: Listado de Usuarios." << endl;
            cout << "3: Alta de producto." << endl;
            cout << "4: Consultar producto." << endl;
            cout << "5: Crear promoción." << endl;
            cout << "6: Consultar promoción." << endl;
            cout << "7: Realizar compra." << endl;
            cout << "8: Dejar comentario." << endl;
            cout << "9: Eliminar comentario." << endl;
            cout << "10: Enviar producto." << endl;
            cout << "11: Expediente de Usuario." << endl;
            cout << "12: Suscribirse a notificaciones." << endl;
            cout << "13: Consulta de notificaciones ." << endl;
            cout << "14: Eliminar suscripciones. " << endl;
            cout << "15: Ayuda. " << endl;
            cout << "16: Salir. " << endl;
            }
        }



    } while (opcion != 16);
    
    return 0;
}
