
#include <iostream>
#include "../include/Fabrica.h"
using namespace std;

void Menu() {
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
}



int main()
{
    Fabrica * fabrica = Fabrica::getInstancia();
    IUsuario iUsuario = fabrica->getIUsuario();
    IProducto iProducto = fabrica->getIProducto();

    int opcion;
    Menu();
    
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
                
            }
            case 3: 
            {
            
            }
            case 4: 
            {
           
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
                iUsuario.ConsultarUsuarios();
                cout << "Seleccione un Usuario" << endl;
                string nickname;
                cin >> nickname;
                //set(DTProducto) dtproductos = iUsuario.SeleccionarUsuario(string nickname, IProducto);
                Usuario* user = iUsuario.SeleccionarUsuario(nickname);
                set(DTProducto) dtproductos = iProducto.getDTProductos();
                for (const auto& dtp : dtproductos) {
                    cout << "Nombre Producto: " dtp.getNombre(), " Código Producto: " dtp.getCodigo() << endl
                }
                
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
                Menu();
            }
        }



    } while (opcion != 16);
    
    return 0;
}
