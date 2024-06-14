
#include <iostream>
#include "../include/Fabrica.h"
using namespace std;

#ifndef FuncionesAuxiliares
#define FuncionesAuxiliares
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

void OpcionesComentario() {
    cout << "Elija una opción:" << endl;
    cout << "1: Redactar nuevo comentario." << endl;
    cout << "2: Responder comentario." << endl;
    cout << "3: Ayuda." << endl;
    cout << "4: Salir." << endl;
}
#endif


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
                //Lista todos los Usuarios en Consola
                iUsuario.ConsultarUsuarios();
                //El Administrador selecciona un Usuario
                cout << "Seleccione un Usuario por nombre: " << endl;
                string nickname;
                cin >> nickname;
                Usuario* user = iUsuario.SeleccionarUsuario(nickname);
                //Se listan todos los Productos presentes (en caso de que "user" exista)
                if (user != null) {
                    set(DTProducto) dtproductos = iProducto.getDTProductos(); //set(DTProducto) dtproductos = iUsuario.SeleccionarUsuario(string nickname, IProducto);
                    for (const auto& dtp : dtproductos) {
                        cout << "Nombre Producto: " dtp.getNombre(), " Código Producto: " dtp.getCodigo() << endl
                    }
                    //Se elije el produco a comentar
                    cout << "" << endl;
                    cout << "Seleccione un Producto por código: " << endl;
                    string codigo;
                    cin >> codigo;
                    Producto* producto = iProducto.elegirProducto(string codigo);
                    //Se decide entre escribir un comentario, responder, o no hacer nada (todo esto, en caso de que "producto" exista)
                    if (producto != null) {
                        OpcionesComentario();
                        do {
                            int option = 0;
                            cin >> option;
                            switch (option) {
                                case 1:
                                {
                                    cout << "Ingrese el texto del Coentario: "
                                    string txt;
                                    cin >> txt;
                                    IUsuario.nuevoComentario(txt, user);
                                }
                                case 2:
                                {
                                    
                                }
                                case 3:
                                {
                                    OpcionesComentario();
                                }
                                default
                                {
                                    if (option != 4) {
                                        cout << "Opción no disponible..." << endl;
                                        OpcionesComentario()
                                    }
                                }
                                cout << "Seleccione nuevamente una opcion" << endl;
                            }
                        } while (option == 4)
                    }
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
