#include "./include/Fabrica.h"
//#include "./include/DTFecha.h"
#include <iostream>
using namespace std;

void listarString(set<string> setS) {
    for (string s:setS) {
        cout << s << endl;
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
            case 0: //Cargar datos
            {
                //Clientes
                
                DTUsuario *U= new DTCliente("juan87", DTFecha(20,10,1992), "1qaz2wsx ", "Av. 18 de Julio ",456,"Melo ");
                bool nickenuso1 = iUsuario->NuevoUsuario(U);
                if (!nickenuso1)
                iUsuario->Registrar();
                
                delete U;

                U= new DTCliente("laura", DTFecha(22,9,1979), "3edc4rfv ", "Rondeau ",1617,"Montevideo");
                bool nickenuso2 = iUsuario->NuevoUsuario(U);
                if (!nickenuso2)
                iUsuario->Registrar();
                delete U;

                U= new DTCliente("natalia", DTFecha(14,4,1982), "poiuyt ", "Paysandú  ",2021,"Salto");
                bool nickenuso3 = iUsuario->NuevoUsuario(U);
                if (!nickenuso3)
                iUsuario->Registrar();
                
                delete U;

                U= new DTCliente("pablo10", DTFecha(30,11,1995), "lkjhgv ", "Av. Rivera",1819 ,"Mercedes");
                bool nickenuso4 = iUsuario->NuevoUsuario(U);
                if (!nickenuso4)
                iUsuario->Registrar();
               
                delete U;

                U= new DTCliente("roberto", DTFecha(12,8,1990), "mnbvcx ", "Av. Brasil",1011 ,"Montevideo");
                bool nickenuso5 = iUsuario->NuevoUsuario(U);
                if (!nickenuso5)
                iUsuario->Registrar();
                
                delete U;

                //Vendedores
                

                U= new DTVendedor("ana23", DTFecha(15,5,1988), "qwer1234  ", "212345678001");
                bool nickenuso6 = iUsuario->NuevoUsuario(U);
                if (!nickenuso6)
                iUsuario->Registrar();
                
                delete U;

                U= new DTVendedor("carlos78", DTFecha(18,6,1986), "asdfghj   ", "356789012345");
                bool nickenuso7 = iUsuario->NuevoUsuario(U);
                if (!nickenuso7)
                iUsuario->Registrar();
                
                delete U;

                U= new DTVendedor("diegom", DTFecha(28,7,1993), "zxcvbn   ", "190123456789 ");
                bool nickenuso8 = iUsuario->NuevoUsuario(U);
                if (!nickenuso8)
                iUsuario->Registrar();
                
                delete U;

                U= new DTVendedor("maria01", DTFecha(25,3,1985), "5tgb6yhn   ", "321098765432");
                bool nickenuso9 = iUsuario->NuevoUsuario(U);
                if (!nickenuso9)
                iUsuario->Registrar();
                
                delete U;

                U= new DTVendedor("sofia25", DTFecha(7,12,1983), "1234asdf   ", "445678901234");
                bool nickenuso10 = iUsuario->NuevoUsuario(U);
                if (!nickenuso10)
                iUsuario->Registrar();
            
                delete U;

              
                //Productos
                iUsuario->seleccionarVendedor("carlos78" );
                string codigo = iProducto->ingresarProducto( "Camiseta Azul ", 1400, 50 , "Camiseta de poliester, color azul", TipoProducto::ropa);
                //cout << "Codigo:" << codigo << endl;
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("ana23" );
                codigo = iProducto->ingresarProducto( "Televisor LED  ", 40500, 30  , "Televisor LED 55 pulgadas", TipoProducto::electrodomesticos);
                //cout << "Codigo:" << codigo << endl;
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("carlos78");
                codigo = iProducto->ingresarProducto("Chaqueta de Cuero", 699.99, 20, "Chaqueta de cuero, color negro", TipoProducto::ropa);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("ana23");
                codigo = iProducto->ingresarProducto("Microondas Digital", 1199.99, 15, "", TipoProducto::electrodomesticos);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("diegom");
                codigo = iProducto->ingresarProducto("Luz LED", 599.99, 40, "Luz Bluetooth LED", TipoProducto::otros);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("carlos78");
                codigo = iProducto->ingresarProducto("Pantalones Vaqueros", 60, 25, "Pantalones vaqueros, talla 32", TipoProducto::ropa);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("diegom");
                codigo = iProducto->ingresarProducto("Auriculares Bluetooth", 199.99, 35, "Auriculares bluethooth para celular", TipoProducto::otros);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("ana23");
                codigo = iProducto->ingresarProducto("Refrigerador", 15499, 10, "Refrigerador de doble puerta", TipoProducto::electrodomesticos);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("ana23");
                codigo = iProducto->ingresarProducto("Cafetera", 23000, 50, "Cafetera de goteo programable", TipoProducto::electrodomesticos);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("carlos78");
                codigo = iProducto->ingresarProducto("Zapatillas Deportivas", 5500, 20, "Zapatillas para correr, talla 42", TipoProducto::ropa);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("carlos78");
                codigo = iProducto->ingresarProducto("Mochila", 9000, 30, "Mochila de viaje, 40L", TipoProducto::otros);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("diegom");
                codigo = iProducto->ingresarProducto("Plancha de Ropa", 2534, 25, "Plancha a vapor, 1500W", TipoProducto::electrodomesticos);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("sofia25");
                codigo = iProducto->ingresarProducto("Gorra", 200, 50, "Gorra para deportes, color rojo", TipoProducto::ropa);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("diegom");
                codigo = iProducto->ingresarProducto("Tablet", 15000, 15, "Tablet Android de 10 pulg", TipoProducto::electrodomesticos);
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("sofia25");
                codigo = iProducto->ingresarProducto("Reloj de Pared", 150.50, 20, "", TipoProducto::otros);
                iProducto->darAltaProducto(codigo);

                //Promociones

                set<string> vendedores = iUsuario->crearPromocion(DTFecha(25,10,2024), "Para que puedas ahorrar en la casa nueva", "Casa nueva", 30);
                set<DTProducto*> productos = iUsuario->seleccionarUnVendedor("ana23");
                iUsuario->aniadirProducto("2", 1);
                iUsuario->aniadirProducto("4", 1);
                iUsuario->aniadirProducto("8", 1);
                iUsuario->darDeAltaPromo();
                for (DTProducto* p : productos)
                    delete p;


                // Promoción PM2 - Fiesta
                vendedores = iUsuario->crearPromocion(DTFecha(26, 10, 2024), "Para que no te quedes sin ropa para las fiestas", "Fiesta", 20);
                productos = iUsuario->seleccionarUnVendedor("carlos78");
                iUsuario->aniadirProducto("3", 2);
                iUsuario->aniadirProducto("6", 3);
                iUsuario->darDeAltaPromo();
                for (DTProducto* p : productos)
                    delete p;


                // Promoción PM3 - Domotica
                vendedores = iUsuario->crearPromocion(DTFecha(26, 10, 2024), "Para modernizar tu casa", "Domotica", 10);
                productos = iUsuario->seleccionarUnVendedor("diegom");
                iUsuario->aniadirProducto("5", 2);
                iUsuario->darDeAltaPromo();
                for (DTProducto* p : productos)
                    delete p;


                // Promoción PM4 - Liquidacion
                vendedores = iUsuario->crearPromocion(DTFecha(26, 3, 2024), "Hasta agotar stock","Liquidacion", 10);
                productos = iUsuario->seleccionarUnVendedor("diegom");
                iUsuario->aniadirProducto("14", 1);
                iUsuario->darDeAltaPromo();

                for (DTProducto* p : productos)
                    delete p;
                

                cout << "Seleccione otra opción: (15 para ayuda)" << endl;

            break;
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
                cout << "Seleccione otra opción: (15 para ayuda)" << endl;
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
            cout << "Seleccione otra opción: (15 para ayuda)" << endl;
            break;
            }
            case 3: 
            {
            set<string> vendedores = iUsuario->listarVendedores();
            cout << "Lista de vendedores: " << endl;
            listarString(vendedores);
            vendedores.clear();
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
            cout << "Codigo:" << codigo << endl;
            iProducto->darAltaProducto(codigo);
            cout << "El producto ha sido registrado" << endl;
            cout << "Seleccione otra opción: (15 para ayuda)" << endl;
            break;
            }
            case 4: 
            {
                cout << "Estos son los productos disponibles:" << endl;
                set<DTProducto*> setDTP = iProducto->consultarProducto();//liberar
                cout << "Codigo, Nombre" << endl;
                for (DTProducto *DTP_for : setDTP) {
                cout << DTP_for->getCodigo() << ", " << DTP_for->getNombre() << endl;
                }
                cout << "Ingrese el código del producto del cual desea información." << endl;
                string codigo;
                cin >> codigo;
                DTProductoInfo *DTPI = iProducto->seleccionarProducto(codigo);//liberar
                cout << "Precio: " << DTPI->getPrecio() << endl
                     << "Stock: " << DTPI->getStock() << endl
                     << "Descripción: " << DTPI->getDescripcion() << endl;
                string categoria;
                TipoProducto tipo = DTPI->getTipo();
                if (tipo == static_cast<TipoProducto>(1)) 
                    categoria = "ropa";
                else if (tipo == static_cast<TipoProducto>(2))
                    categoria = "electrodomésticos";
                    else 
                        categoria = "otros";
                cout << "Categoría: " << categoria << endl 
                     << "Nickname del vendedor: " << DTPI->getNicknameVendedor() << endl;
                     cout <<  "Terminado " << endl;

                     //arreglar
            for (set<DTProducto *>::iterator it = setDTP.begin(); it != setDTP.end(); ++it) // liberar la memoria
                {
                    delete *it;
                }
                delete DTPI;


            cout << "Seleccione otra opción: (15 para ayuda)" << endl;

            break;
            }
            case 5: 
            {
                string nombre, descripcion, vendedor, cod;
                float descuento;
                int dia, mes, anio;
                unsigned int cantMin;
                DTFecha vencimiento = DTFecha(0,0,0);
                cout << "Ingrese los datos de la Promocion:" << endl;
                cout << "Ingrese el Nombre:" << endl;
                cin >> nombre;
                cout << "Ingrese la Descripcion:" << endl;
                //getline(cin,descripcion);
                cin >> descripcion;
                cout << "Ingrese el Descuento:" << endl;
                cin >> descuento;
                cout << "Ingrese la Fecha de Vencimiento:" << endl;
                cout << "Dia:"<< endl;
                cin >> dia;
                cout << "Mes:"<< endl;
                cin >> mes;
                cout << "Año:"<< endl;
                cin >> anio;
                vencimiento =DTFecha(dia,mes,anio);
                set<string> vendedores = iUsuario->crearPromocion(vencimiento, descripcion, nombre, descuento);

                listarString(vendedores);

                cout << "Ingrese el vendedor que desea seleccionar:"<< endl;
                cin >> vendedor;
                set<DTProducto*> productos = iUsuario->seleccionarUnVendedor(vendedor);
                cout << "Estos son los productos de " << vendedor << ":" << endl;
                cout << "Codigo, Nombre" << endl;
                for (DTProducto* s:productos){
                    cout << s->getCodigo() << ", " << s->getNombre() << endl;
                }
                int a;
                do {
                    cout << "1: Añadir producto"<< endl;
                    cout << "2: Salir"<< endl;
                    cin >> a;
                    if(a == 1){
                        cout << "Ingrese el Codigo:"<< endl;
                        cin >> cod;
                        cout << "Ingrese la Cantidad minima:"<< endl;
                        cin >> cantMin;
                        iUsuario->aniadirProducto(cod, cantMin);
                    }
                    

                }while(a == 1);
                for (DTProducto* p : productos)
                    delete p;
                iUsuario->darDeAltaPromo();
               cout <<  "Fin de creación de promoción. " << endl;
               cout << "Seleccione otra opción: (15 para ayuda)" << endl;

            break;
            }
            case 6:
            {
                cout << "Lista de Promociones: " << endl; 
                set<DTPromocion> promociones = iUsuario->consultarPromocion();
                set<DTPromocion>::iterator iter;
                for (iter = promociones.begin(); iter != promociones.end(); iter++) {
                    cout << *iter<< endl;
                }
                string nombre_promocion;
                cout << "Ingrese el nombre de la Promocion (N si no): " << endl; 
                cin >> nombre_promocion;

               if(nombre_promocion != "N"){
                    DTVendedorInfo info = iUsuario->seleccionarPromocion(nombre_promocion);
                    cout << "Nombre del Vendedor: "<< info.getNickname() << endl; 
                    cout << "Fecha de nacimiento: " << info.getNacimiento() << endl;
                    cout << "Codigo RUT: "<< info.getRUT() << endl;
                    cout << "Productos: " << endl;
                    set<DTProducto> in = info.getprodInfo() ;
                    for(DTProducto p : in){
                        cout << p <<endl;
                    }
                }        
            cout << "Seleccione otra opción: (15 para ayuda)" << endl;
            break;
            }
            case 7:
            {
            cout << "Seleccione otra opción: (15 para ayuda)" << endl;
            break;
            }
            case 8: 
            {
            cout << "Seleccione otra opción: (15 para ayuda)" << endl;
            break;
            }
            case 9: 
            {
            cout << "Seleccione otra opción: (15 para ayuda)" << endl;
            break;
            }
            case 10: 
            {
            cout << "Seleccione otra opción: (15 para ayuda)" << endl;
            break;
            }
            case 11: 
            {
            cout << "Seleccione otra opción: (15 para ayuda)" << endl;
            break;
            }
            case 12: 
            {
                cout << "Ingrese el nombre de cliente para la suscripción:" << endl;
                string nombreCliente;
                cin >> nombreCliente;
                set<string> setNoS = iUsuario->vendedoresNoSuscritos(nombreCliente);
                cout << "Estos son los vendedores a los que se puede suscribir:" << endl;
                listarString(setNoS);
                int a;
                do {
                    cout << "1: Suscribirse"<< endl;
                    cout << "2: Salir"<< endl;
                    cin >> a;
                    if(a == 1){
                        cout << "Ingrese el nickname del vendedor al cual desea suscribirse:"<< endl;
                        string nick;
                        cin >> nick;
                        iUsuario->suscribirse(nick);                        
                        cout << "Suscrito con éxito!"<< endl;

                    }
                    

                }while(a == 1);
                cout << "Fin de suscribirse a vendedores." << endl;
                cout << "Seleccione otra opción: (15 para ayuda)" << endl; 
            break;
            }
            case 13: 
            {
                cout << "Ingrese su nombre de usuario:" << endl;
                string nickname;
                cin >> nickname;
                set<DTNotificacion*> setDTN = iUsuario->consultarNotificaciones(nickname);
                if (setDTN.begin() != setDTN.end()) {
                cout << "Estas son sus notificaciones:" << endl;
                for (DTNotificacion* nt : setDTN) {
                    cout << "Nombre Promoción: " << nt->getNombrePromo() << endl;
                    cout << "Productos: " << endl;
                    listarString(nt->getProductos());
                    cout << "Descuento: " << nt->getDescuento() << endl;
                    cout << "Disponible hasta: " << nt->getVencimiento() << endl;
                }
                }
                else cout << "No tiene ninguna notificación. " << endl;

                iUsuario->eliminarNotificaciones();
                cout << "Fin de consultar notificaciones." << endl;
                cout << "Seleccione otra opción: (15 para ayuda)" << endl; 
            break;
            }
            case 14: 
            {
                cout << "Ingrese su nickname de cliente:" << endl;
                string nickname;
                cin >> nickname;
                set<string> vendedores = iUsuario->listarVendedoresSuscritos(nickname);
                cout << "Estos son los vendedores a los cuales esta suscrito:" << endl;
                listarString(vendedores);
                cout << "Ingrese el nickname del vendedor al cual se desea desuscribir:" << endl;
                string nickname_vendedor;
                cin >> nickname_vendedor;
                iUsuario->eliminarSuscripcion(nickname_vendedor);
                cout << "La suscripcion se elimino con éxito." << endl;
                cout << "Seleccione otra opción: (15 para ayuda)" << endl; 
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
