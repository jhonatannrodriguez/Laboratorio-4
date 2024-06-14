
#include <iostream>
#include "../include/Fabrica.h"
using namespace std;

void listarString(set<string> s) {
    for (string st:s) {
        cout << st << endl;
    }
}

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
            set<string> vendedores = iUsuario->listarVendedores();
            listarString(vendedores);
            string v, nombre, descripcion, codigo;
            float precio;
            unsigned int stock;
            int categoria;
            TipoProducto tipo;
            cout << "seleccione un vendedor:" << endl;
            cin >> v;
            iUsuario->seleccionarVendedor(v);
            cout << "elija el nombre del producto:" << endl;
            cin >> nombre;
            cout << "elija la descripcion del producto:" << endl;
            cin >> descripcion;
            cout << "elija el precio del producto:" << endl;
            cin >> precio;
            cout << "elija el stock del producto:" << endl;
            cin >> stock;
            cout << "elija la categoría del producto:" << endl;
            cout << "1: ropa" << endl << "2: electrodomésticos" << endl << "3: otros" << endl;
            cin >> categoria;
            tipo = static_cast<TipoProducto>(categoria);
            codigo = iProducto->ingresarProducto(nombre, precio, stock, descripcion, tipo);
            iProducto->darAltaProducto(codigo);
            cout << "El producto ha sido registrado" << endl;
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
