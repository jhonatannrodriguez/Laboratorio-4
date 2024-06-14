#include "./include/Fabrica.h"
//#include "./include/DTFecha.h"
#include <iostream>
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
            case 1: //Alta de usuario
            {
            bool nick_en_uso;
            string nombre = "0";
            string contrasenia = "0";
            DTFecha fecha = DTFecha(0,0,0);
            DTUsuario *dtusuario;
            int tipo;
            int dia;
            int mes;
            int anio;
            
                
                cout << "Selecione el tipo de usuario:" << endl;
                cout << "1- Cliente." << endl;
                cout << "2- Vendedor." << endl;
                cin >> tipo;
                cout << "Ingrese el nombre: ";
                cin >> nombre;   
                cout << "Ingrese fecha de nacimiento."<< endl;
                cout << "Dia:"<< endl;
                cin >> dia;
                cout << "Mes:"<< endl;
                cin >> mes;
                cout << "Año:"<< endl;
                cin >> anio;
                fecha =DTFecha(dia,mes,anio);
                //cin >> fecha;
                cout << "Ingrese contraseña: ";
                cin >> contrasenia;

                
                    if (tipo == 1)
                    {
                        string calle;
                        string ciudad;
                        int numero; 
                        cout << "Ingrese la calle del cliente:" << endl;
                        cin >> calle;
                        cout << "Ingrese la ciudad del cliente:" << endl;
                        cin >> ciudad;
                        cout << "Ingrese el numero de puerta del cliente:" << endl;
                        cin >> numero;
                        dtusuario = new DTCliente(nombre, fecha, contrasenia, calle,numero,ciudad);
                        
                    }
                    if (tipo==2)
                    {
                        string codigo_rut;
                        cout << "Ingrese el codigo RUT del vendedor:" << endl;
                        cin >> codigo_rut;
                        dtusuario = new DTVendedor(nombre, fecha, contrasenia, codigo_rut);
                    }
                
                nick_en_uso = iUsuario->NuevoUsuario(dtusuario); 
                
                if(!nick_en_uso){
                    iUsuario->Registrar(); 
                    cout << "Se registro el usuario en el sistema." << endl;
                }
                else{
                    cout << "Nickname no disponible." << endl;   
                }

                //liberar el dt
            
                delete dtusuario;
                break;
            


            }
            case 2: //Listar Usuarios
            {
            set<DTUsuario *> listaUsuarios = iUsuario->ListarUsuarios(); 
            cout << "Lista de usuarios: " << endl;

                for (set<DTUsuario *>::iterator it = listaUsuarios.begin(); it != listaUsuarios.end(); ++it) // liberar la memoria
                {
                    cout << **it << endl;
                    delete *it;
                }
            break;
            }
            case 3: 
            {




                
            break;
            }
            case 4: 
            {
            break;
            }
            case 5: 
            {
            break;
            }
            case 6:
            {
            break;
            }
            case 7:
            {
            break;
            }
            case 8: 
            {
            break;
            }
            case 9: 
            {
            break;
            }
            case 10: 
            {
            break;
            }
            case 11: 
            {
            break;
            }
            case 12: 
            {
            break;
            }
            case 13: 
            {
            break;
            }
            case 14: 
            {
            break;
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
            break;
            }


            case 16: 
            {
            delete fabrica;
            break;
            }
        }



    } while (opcion != 16);
    
    return 0;
}
