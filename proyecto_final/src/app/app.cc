#include <iostream>
#include <typeinfo>
//#include "files/actividad.h"
// #include "files/admin.h"
#include "systema.h"
#include "actividades.h"
#include "admin.h"
#include "director.h"
#include "foro.h"
#include "persona.h"
#include "usuario.h"

int main()
{
    Systema sys;
    Persona user("empty", "empty", "Usuario");
    Foro forocpy;
    int attempts=3;
    bool cont=true;

    sys.LeerDatosUsuarios();
    forocpy.LeerDatosActividades();

    int opcion;

    std::cout << "\n========================================\n";
    std::cout << "        Bienvenido al Sistema\n";
    std::cout << "========================================\n";
    std::cout << "1. Iniciar Sesión\n";
    std::cout << "2. Visualizar Actividades\n";
    std::cout << "0. Salir\n";
    std::cout << "Seleccione una opción: ";
    std::cin >> opcion;


    if(opcion==0)
    {
        std::cout << "Saliendo del programa...\n";
        return 0;
    }

    if(opcion==2)
    {
        std::cout << "\n==========================================\n";
        std::cout << "       Actividades Disponibles\n";
        std::cout << "==========================================\n";
        forocpy.GetTitulos();
        std::cout << "==========================================\n\n";
    }

    if(opcion==1)
    {
        do{
            std::string nom_usuario, inputContrasenia;
            std::string respuesta; 

            std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            std::cout << "        Iniciar Sesión\n";
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            std::cout<<"Introduzca su usuario:"<<std::endl;
            std::cin>>nom_usuario;
            user.CambiaEmail(nom_usuario);

            if(sys.ExisteUsuario(nom_usuario)==false)
            {
                std::cout<<"No se ha encontrado Usuario"<<std::endl;
                std::cout<<"Desea registrarse (y/n):"<<std::endl;
                std::cin>>respuesta;
                if(respuesta=="y"){
                    std::cout << "\nIngrese su contraseña para iniciar sesión: ";
                    std::cin >> inputContrasenia;
                    user.CambiaContrasenia(inputContrasenia);
                    sys.AddUsuario(user);
                    sys.borrarArchivo("Lista_Usuarios.txt");
                    sys.FileDatosUsuarios();
                }
                else{exit(EXIT_FAILURE);}
            }
            do{
                std::cout << "\nIngrese su contraseña para iniciar sesión: ";
                std::cin >> inputContrasenia;

                if(sys.ComprobarContrasena(nom_usuario,inputContrasenia)==true){break;}
                else{
                    attempts--;
                    std::cout<<"Te quedan "<< attempts << " intentos." <<std::endl;
                    if(attempts==0){
                        std::cout<<"Intentos excedidos"<<std::endl;
                        exit(EXIT_FAILURE);
                    }
                }
            }while(attempts!=0);
            user = sys.GetUser(nom_usuario);
            std::cout<<"Usuario Logeado Bienvenido..."<<std::endl;
            std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cont = false;
        }while(cont!=false);

            if(user.ObtenerRol()=="Usuario")
            {
                Usuario user1(user.ObtenerEmail(), user.ObtenerContrasenia(), user.ObtenerRol(),
                user.ObtenerDni(), user.ObtenerNombre(), user.ObtenerFacultad());
                user1.UserMenu(user1);
                
            }  
            if(user.ObtenerRol()=="Director")
            {
                Director user1(user.ObtenerEmail(), user.ObtenerContrasenia(), user.ObtenerRol(),
                user.ObtenerDni(), user.ObtenerNombre(), user.ObtenerFacultad());
                user1.DirectorMenu(user1);
            }
            if(user.ObtenerRol()=="Administrador")
            {
                Admin user1(user.ObtenerEmail(), user.ObtenerContrasenia(), user.ObtenerRol(),
                user.ObtenerDni(), user.ObtenerNombre(), user.ObtenerFacultad());
                user1.AdminMenu(user1);
            }
            else{return 0;}
    }

    else {
        std::cout << "Saliendo del programa...\n";
        std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        return 0;
    } 
}
