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
    cout << "17: Actualizar fecha del sistema. " << endl;

    do
    {
        cin >> opcion;
        switch (opcion)
        {
            case 0: //Cargar datos
            {
                //Clientes
                
                DTUsuario *U= new DTCliente("juan87", DTFecha(20,10,1992), "1qaz2wsx", "Av. 18 de Julio",456,"Melo ");
                bool nickenuso1 = iUsuario->NuevoUsuario(U);
                if (!nickenuso1)
                iUsuario->Registrar();
                
                delete U;

                U= new DTCliente("laura", DTFecha(22,9,1979), "3edc4rfv", "Rondeau",1617,"Montevideo");
                bool nickenuso2 = iUsuario->NuevoUsuario(U);
                if (!nickenuso2)
                iUsuario->Registrar();
                delete U;

                U= new DTCliente("natalia", DTFecha(14,4,1982), "poiuyt", "Paysandú",2021,"Salto");
                bool nickenuso3 = iUsuario->NuevoUsuario(U);
                if (!nickenuso3)
                iUsuario->Registrar();
                
                delete U;

                U= new DTCliente("pablo10", DTFecha(30,11,1995), "lkjhgv", "Av. Rivera",1819 ,"Mercedes");
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
                

                U= new DTVendedor("ana23", DTFecha(15,5,1988), "qwer1234", "212345678001");
                bool nickenuso6 = iUsuario->NuevoUsuario(U);
                if (!nickenuso6)
                iUsuario->Registrar();
                
                delete U;

                U= new DTVendedor("carlos78", DTFecha(18,6,1986), "asdfghj", "356789012345");
                bool nickenuso7 = iUsuario->NuevoUsuario(U);
                if (!nickenuso7)
                iUsuario->Registrar();
                
                delete U;

                U= new DTVendedor("diegom", DTFecha(28,7,1993), "zxcvbn", "190123456789 ");
                bool nickenuso8 = iUsuario->NuevoUsuario(U);
                if (!nickenuso8)
                iUsuario->Registrar();
                
                delete U;

                U= new DTVendedor("maria01", DTFecha(25,3,1985), "5tgb6yhn", "321098765432");
                bool nickenuso9 = iUsuario->NuevoUsuario(U);
                if (!nickenuso9)
                iUsuario->Registrar();
                
                delete U;

                U= new DTVendedor("sofia25", DTFecha(7,12,1983), "1234asdf", "445678901234");
                bool nickenuso10 = iUsuario->NuevoUsuario(U);
                if (!nickenuso10)
                iUsuario->Registrar();
            
                delete U;

              
                //Productos
                iUsuario->seleccionarVendedor("carlos78" );
                string codigo = iProducto->ingresarProducto( "Camiseta Azul", 1400, 50 , "Camiseta de poliester, color azul", TipoProducto::ropa);
                //cout << "Codigo:" << codigo << endl;
                iProducto->darAltaProducto(codigo);

                iUsuario->seleccionarVendedor("ana23" );
                codigo = iProducto->ingresarProducto( "Televisor LED", 40500, 30  , "Televisor LED 55 pulgadas", TipoProducto::electrodomesticos);
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


                //Compras  

                /*iUsuario->seleccionarCliente(cliente);
                iProducto->agregarProducto(cod, cantidad);
                DTCI = iProducto->finalizarCompra();
                delete DTCI*/ //falta enviar producto 

                
                fechaSistema *Fecha = fabrica->getfechaSistema();
                

                DTFecha fechaSis = DTFecha(1, 5, 2024);
                Fecha->setFecha(fechaSis);
                iUsuario->seleccionarCliente("juan87");
                iProducto->agregarProducto("2", 2);  // Televisor LED
                iProducto->agregarProducto("4", 1);  // Microondas Digital
                iProducto->agregarProducto("8", 1);  // Refrigerado
                DTCompraInfo* DTCI = iProducto->finalizarCompra();
                delete DTCI;


                fechaSis = DTFecha(1, 5, 2024);
                Fecha->setFecha(fechaSis);
                iUsuario->seleccionarCliente("juan87");
                iProducto->agregarProducto("5", 1);  // Luz LED
                DTCI = iProducto->finalizarCompra();
                delete DTCI;


                fechaSis = DTFecha(15, 5, 2024);
                Fecha->setFecha(fechaSis);
                iUsuario->seleccionarCliente("laura");
                iProducto->agregarProducto("14", 10); // Tablet
                DTCI = iProducto->finalizarCompra();
                delete DTCI;
                
                fechaSis = DTFecha(25, 4, 2024);
                Fecha->setFecha(fechaSis);
                iUsuario->seleccionarCliente("natalia");
                iProducto->agregarProducto("11", 1);  // Mochila
                iProducto->agregarProducto("12", 1);  // Plancha de Ropa
                iProducto->agregarProducto("13", 1);  // Gorra
                DTCI = iProducto->finalizarCompra();
                delete DTCI;

                fechaSis = DTFecha(20, 5, 2024);
                Fecha->setFecha(fechaSis);
                iUsuario->seleccionarCliente("juan87");
                iProducto->agregarProducto("3", 2);  // Chaqueta de Cuero //ACTUALIZAR FECHA
                iProducto->agregarProducto("6", 3);  // Pantalones Vaqueros
                DTCI = iProducto->finalizarCompra();
                delete DTCI;
                
                fechaSis = DTFecha(12, 5, 2024);
                Fecha->setFecha(fechaSis);
                iUsuario->seleccionarCliente("laura");
                iProducto->agregarProducto("1", 2);  // Camiseta Azul
                DTCI = iProducto->finalizarCompra();
                delete DTCI;
                
                fechaSis = DTFecha(13, 5, 2024);
                Fecha->setFecha(fechaSis);
                iUsuario->seleccionarCliente("natalia");
                iProducto->agregarProducto("1", 3);  // Camiseta Azul
                DTCI = iProducto->finalizarCompra();
                delete DTCI;

                fechaSis = DTFecha(14, 5, 2024);
                Fecha->setFecha(fechaSis);
                iUsuario->seleccionarCliente("pablo10");
                iProducto->agregarProducto("1", 4);  // Camiseta Azul
                DTCI = iProducto->finalizarCompra();
                delete DTCI;
                
                fechaSis = DTFecha(15, 5, 2024);
                Fecha->setFecha(fechaSis);
                iUsuario->seleccionarCliente("roberto");
                iProducto->agregarProducto("1", 5);
                DTCI = iProducto->finalizarCompra();
                delete DTCI;

                //Comentarios
                /*set<DTProducto*> setDTP = iUsuario->seleccionarUsuario(nickname);
                iProducto->elegirProducto(codigo); 
                iUsuario->nuevoComentario(textoComent);   o si es una respuesta iProducto->nuevaRespuesta(idComent, textoComent);*/


                //CM1 
                set<DTProducto*> setDTP = iUsuario->seleccionarUsuario("juan87");
                iProducto->elegirProducto("1");
                iUsuario->nuevoComentario("¿La camiseta azul esta disponible en talla M?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM2
                /*setDTP = iUsuario->seleccionarUsuario("carlos78");
                iProducto->elegirProducto("1");
                set<DTComentario*> textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("1", "Si, tenemos la camiseta azul en talla M.");
                for (DTProducto* p : setDTP)
                    delete p;*/
                //CM3
                /*setDTP = iUsuario->seleccionarUsuario("laura");
                iProducto->elegirProducto("1");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("2", "¿Es de buen material? Me preocupa la durabilidad.");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM4 
                setDTP = iUsuario->seleccionarUsuario("juan87");
                iProducto->elegirProducto("1");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("3", "He comprado antes y la calidad es buena.");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM5
                setDTP = iUsuario->seleccionarUsuario("natalia");
                iProducto->elegirProducto("1");
                iUsuario->nuevoComentario("¿Como es el ajuste? ¿Es ajustada o holgada?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM6
                setDTP = iUsuario->seleccionarUsuario("laura");
                iProducto->elegirProducto("2");
                iUsuario->nuevoComentario("¿Cual es la resolucion del Televisor LED?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM7
                setDTP = iUsuario->seleccionarUsuario("ana23");
                iProducto->elegirProducto("2");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("6", "El televisor LED tiene una resolucion de 4K UHD.");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM8
                setDTP = iUsuario->seleccionarUsuario("pablo10");
                iProducto->elegirProducto("2");
                iUsuario->nuevoComentario("¿Tiene soporte para HDR10?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM9
                setDTP = iUsuario->seleccionarUsuario("ana23");
                iProducto->elegirProducto("2");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("8", "Si, soporta HDR10.");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM10
                setDTP = iUsuario->seleccionarUsuario("natalia");
                iProducto->elegirProducto("3");
                iUsuario->nuevoComentario("¿La chaqueta de cuero es resistente al agua?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM11
                setDTP = iUsuario->seleccionarUsuario("carlos78");
                iProducto->elegirProducto("3");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("10", "No, la chaqueta de cuero no es resistente al agua.");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM12
                setDTP = iUsuario->seleccionarUsuario("laura");
                iProducto->elegirProducto("3");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("10", "¿Viene en otros colores?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM13
                setDTP = iUsuario->seleccionarUsuario("carlos78");
                iProducto->elegirProducto("3");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("12", "Si, tambien esta disponible en marron.");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM14
                setDTP = iUsuario->seleccionarUsuario("roberto");
                iProducto->elegirProducto("3");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("10", "¿Es adecuada para climas frios?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM15
                setDTP = iUsuario->seleccionarUsuario("pablo10");
                iProducto->elegirProducto("4");
                iUsuario->nuevoComentario("¿El microondas digital tiene funcion de descongelacion rapida?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM16
                setDTP = iUsuario->seleccionarUsuario("ana23");
                iProducto->elegirProducto("4");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("15", "Si, el microondas digital incluye una funcion de descongelacion rapida.");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM17
                setDTP = iUsuario->seleccionarUsuario("natalia");
                iProducto->elegirProducto("4");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("15", "¿Cuantos niveles de potencia tiene?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM18
                setDTP = iUsuario->seleccionarUsuario("ana23");
                iProducto->elegirProducto("4");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("17", "Tiene 10 niveles de potencia.");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM19
                setDTP = iUsuario->seleccionarUsuario("roberto");
                iProducto->elegirProducto("4");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("15", "¿Es facil de limpiar?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM20
                setDTP = iUsuario->seleccionarUsuario("roberto");
                iProducto->elegirProducto("5");
                iUsuario->nuevoComentario("¿La luz LED se puede controlar con una aplicacion movil?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM21
                setDTP = iUsuario->seleccionarUsuario("diegom");
                iProducto->elegirProducto("5");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("20", "Si, la luz LED se puede controlar a traves de una aplicacion movil.");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM22
                setDTP = iUsuario->seleccionarUsuario("pablo10");
                iProducto->elegirProducto("5");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("20", "¿Es compatible con Alexa o Google Home?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM23
                setDTP = iUsuario->seleccionarUsuario("diegom");
                iProducto->elegirProducto("5");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("22", "Si, es compatible con ambos.");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM24
                setDTP = iUsuario->seleccionarUsuario("natalia");
                iProducto->elegirProducto("5");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("20", "¿Cuanto dura la bateria?");
                for (DTProducto* p : setDTP)
                    delete p;
                //CM25
                setDTP = iUsuario->seleccionarUsuario("pablo10");
                iProducto->elegirProducto("5");
                textosComentarios = iProducto->listarComentarios();
                iProducto->nuevaRespuesta("20", "¿La aplicacion movil es facil de usar?");
                for (DTProducto* p : setDTP)
                    delete p;*/






                

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
            cin.ignore();
            iUsuario->seleccionarVendedor(v);
            cout << "elija el nombre del producto:" << endl;
            getline(cin,nombre);
            //cin >> nombre;
            cout << "elija la descripcion del producto:" << endl;
            getline(cin,descripcion);
            //cin >> descripcion;
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
                cin.ignore();
                getline(cin,nombre);
                //cin >> nombre;
                cout << "Ingrese la Descripcion:" << endl;
                getline(cin,descripcion);
                //cin >> descripcion;
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
                cin.ignore();
                getline(cin,nombre_promocion); 
                //cin >> nombre_promocion;

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
                set<string> setS = iUsuario->consultarClientes();
                listarString(setS);
                cout << "Seleccione un cliente para realizar la compra" << endl;
                string cliente;
                cin >> cliente;
                iUsuario->seleccionarCliente(cliente);
                set<DTProductoCompleto*> setDTPC = iProducto->listarProductos();
                for(DTProductoCompleto * dtpc : setDTPC) {
                    cout << "Codigo: " << dtpc->getCodigo() << endl;
                    cout << "Nombre: " << dtpc->getNombre() << endl; 
                    cout << "Descripcion:" << dtpc->getDescripcion() << endl;
                    cout << "Precio: " << dtpc->getPrecio() << endl;
                    cout << "Tipo: " << dtpc->getTipoString() << endl;
                    cout << "Stock: " << dtpc->getStock() << endl;
                    cout << endl;
                    delete dtpc;
                }
                int a;
                do {
                    cout << "1: Añadir producto a la compra"<< endl;
                    cout << "2: Salir"<< endl;
                    cin >> a;
                    if(a == 1){
                        cout << "Ingrese el Codigo del producto:"<< endl;
                        string cod;
                        cin >> cod;
                        cout << "Ingrese la Cantidad:"<< endl;
                        unsigned int cantidad;
                        cin >> cantidad;
                        iProducto->agregarProducto(cod, cantidad);
                    }
                }while(a == 1);
                DTCompraInfo* DTCI = iProducto->finalizarCompra();
                cout << "Fecha: " << DTCI->getFecha();
                cout << "Monto: " << DTCI->getMonto() << endl;
                cout << "Productos: " << endl;
                set<DTProductoCompleto*> DTPC = DTCI->getSetDTPC();
                for(DTProductoCompleto * dtpc : DTPC) {
                    cout << "Codigo: " << dtpc->getCodigo() << endl;
                    cout << "Nombre: " << dtpc->getNombre() << endl; 
                    cout << "Descripcion:" << dtpc->getDescripcion() << endl;
                    cout << "Precio: " << dtpc->getPrecio() << endl;
                    cout << "Tipo: " << dtpc->getTipoString() << endl;
                    cout << "Stock: " << dtpc->getStock() << endl;
                    cout << endl;
                    delete dtpc;
                }
                delete DTCI;
                cout << "Seleccione otra opción: (15 para ayuda)" << endl;
                break;
            }
            case 8: 
            {
                //Lista todos los Usuarios en Consola
                set<string> nicknames = iUsuario->ConsultarUsuarios();
                listarString(nicknames); 
                //El Administrador selecciona un Usuario y se listan todos los productos del Sistema
                cout << "Seleccione un Usuario: " << endl;
                string nickname;
                cin >> nickname;
                set<DTProducto*> setDTP = iUsuario->seleccionarUsuario(nickname); //Guarda una referencia del Usuario (lo recuerda)
                for (DTProducto* dtp : setDTP) 
                    cout << "Nombre Producto: " << dtp->getNombre() << ", Código Producto: " << dtp->getCodigo() << endl;
                //Se elije el produco a comentar
                cout << "" << endl;
                cout << "Seleccione un Producto por código: " << endl;
                string codigo;
                cin >> codigo;
                iProducto->elegirProducto(codigo); //Guarda una referencia del Producto (lo recuerda)
                cout << "Elija una opción:" << endl;
                cout << "1: Redactar nuevo comentario." << endl;
                cout << "2: Responder comentario." << endl;
                cout << "3: Salir." << endl;
                //Se decide entre escribir un comentario, responder, o salir
                int opcionComent = 0;
                do {
                    cin >> opcionComent;
                    string textoComent;
                    switch (opcionComent) {
                        case 1:
                        {
                            cout << "Ingrese el texto del Comentario: " << endl;
                            cin.ignore();
                            getline(cin, textoComent);
                            iUsuario->nuevoComentario(textoComent);
                            cout << "Comentario realizado!" << endl;
                            break;
                        }
                        case 2:
                        {
                            cout << "Comentarios del Producto: " << endl;
                            set<DTComentario*> textosComentarios = iProducto->listarComentarios();
                            for (DTComentario* dtc : textosComentarios)
                                cout << "Id: " << dtc->getID() << " Fecha: " << dtc->getFecha() << "Texto: " << dtc->getComentario() << endl;
                            cout << "Seleccione un Comentario por ID: " << endl;
                            string idComent;
                            cin >> idComent;
                            cout << "Escriba una Respuesta: " <<endl;
                            cin.ignore();
                            getline(cin, textoComent);
                            iProducto->nuevaRespuesta(idComent, textoComent);
                            cout << "Respuesta enviada!" << endl;
                            break;
                        }
                        default:
                        { 
                            break;
                        }
                    }
                } while (opcionComent == 3);
            break;
            }
            case 9: 
            {
                //Lista todos los Usuarios en Consola
                set<string> nicknames = iUsuario->ConsultarUsuarios();
                listarString(nicknames);
                //Se selecciona un Usuario, se recuerda y se listan sus comentarios
                cout << "Seleccione un Usuario: " << endl;
                string nickname;
                cin >> nickname;
                set<DTComentario*> textosComentarios = iUsuario->listarComentarios(nickname);
                for (DTComentario* dtc : textosComentarios)
                    cout << "Id: " << dtc->getID() << " Fecha: " << dtc->getFecha() << "Texto: " << dtc->getComentario() << endl;
                cout << "Seleccione el Comentario a eliminar por ID: " << endl;
                string id;
                cin >> id;
                iUsuario->eliminarComentario(id);
                cout << "Comentarios Eliminados" << endl;
                cout << "Seleccione otra opción: (15 para ayuda)" << endl;
            break;
            }
            case 10: 
            {
            cout << "Lista de vendedores:" << endl;
            set<string> s=iUsuario->listarVendedores();
            listarString(s);


            cout << "Seleccione otra opción: (15 para ayuda)" << endl;
            break;
            }
            case 11: 
            {
                cout<<"Lista de Usuarios:"<<endl;
                set<string> s=iUsuario->ConsultarUsuarios();
                listarString(s);
                cout<<"Elige el Usuario:"<<endl;
                string usuario;
                cin >> usuario;
                DTUsuario* u=iUsuario->ElegirUsuario(usuario);
                DTCliente *dtcliente = dynamic_cast<DTCliente *>(u); //Chequeo si es un cliente o vendedor
                if (dtcliente != NULL) 
                {
                    cout << *u <<endl;
                    set<DTCompra*> setcompra=iUsuario->seleccionarUnCliente(u->getNickname());
                    for (set<DTCompra*>::iterator it= setcompra.begin(); it != setcompra.end(); ++it)//listo productos
                    {
                        cout << **it << endl;
                        set<DTProductoCompleto*> setproductoscompletos=iUsuario->seleccionarUnClienteCompra();
                        for(DTProductoCompleto * dtpc : setproductoscompletos) {
                        cout << "Codigo: " << dtpc->getCodigo() << endl;
                        cout << "Nombre: " << dtpc->getNombre() << endl; 
                        cout << "Descripcion:" << dtpc->getDescripcion() << endl;
                        cout << "Precio: " << dtpc->getPrecio() << endl;
                        cout << "Tipo: " << dtpc->getTipoString() << endl;
                        cout << "Stock: " << dtpc->getStock() << endl;
                        cout << endl;
                        delete dtpc;
                        }
                             
                    }  

                }
                else 
                {  
                  set<DTProducto*> setprod=iUsuario->seleccionarUnVendedor(u->getNickname());
                  cout << *u <<endl;
                  
                  for (set<DTProducto*>::iterator it= setprod.begin(); it != setprod.end(); ++it)//listo productos
                    {
                        cout << **it << endl;
                        delete* it;     
                    } 
                    
                  fechaSistema *Fecha = fabrica->getfechaSistema();
                  DTFecha fechaActual=Fecha->getFecha();  //crear funcion que retorne dtpromocion
                  set<DTPromocion*> setpromocion=iUsuario->seleccionarUnVendedorPromocion(u->getNickname()); // lo mismo y comparar fecha sistema con fecha de vencimiento
                  for (set<DTPromocion*>::iterator it= setpromocion.begin(); it != setpromocion.end(); ++it)
                    {
                        DTPromocion* punt=*it;
                        if(punt->getVencimiento()<fechaActual){
                        cout << **it << endl; //sobrecargar dtpromocion    
                        }
                        delete*it; 

                    }   


                delete u;    
                 


                }

                

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
            cout << "17: Actualizar fecha del sistema. " << endl;
            break;
            }


            case 16: 
            {
            delete fabrica;
            break;
            }

            case 17: 
            {
            DTFecha fechaSis;
            int num;
            cout << "Ingresa el dia: ";
            cin >> num;
            fechaSis.setDia(num);
            cout << "Ingresar el mes: ";
            cin >> num;
            fechaSis.setMes(num);
            cout << "Ingresar el año: ";
            cin >> num;
            fechaSis.setAnio(num);
            fechaSistema *Fecha = fabrica->getfechaSistema();
            Fecha->setFecha(fechaSis);
            cout << "Fecha del sistema actualizada." << endl;
            }



        }



    } while (opcion != 16);
    
    return 0;
}
