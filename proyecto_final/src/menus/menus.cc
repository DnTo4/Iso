#include <iostream>
#include <string>
//#include "actividad.h"
#include "systema.h"
#include "usuario.h"
#include "foro.h"
#include "actividades.h"
#include "admin.h"
#include "director.h"

int on = 0;

Systema infCopy;
Foro foroCopy;

std::string search;
std::string new_password, new_name;

void Usuario::UserMenu(Usuario user)
{
    foroCopy.LeerDatosActividades();
    infCopy.LeerDatosUsuarios();
    Actividad aux(user.ObtenerEmail(),user.ObtenerContrasenia(),user.ObtenerRol());
    int option;
    std::string file_name = user.ObtenerNombre()+".txt";
    user.LeerDataUser(file_name);
    do
    {
        std::cout << "Menú:\n";
        std::cout << "1.Visualizar actividades disponibles.\n";
        std::cout << "2.Apuntarse a una actividad\n";
        std::cout << "3.Editar perfil\n";
        std::cout << "4.Actividades a las que estoy preinscrito\n";
        std::cout << "0.Salir\n";
        std::cin >> on;

        switch(on)
        {
            case 1:
                std::cout<<"\n________________________________________________________\n";
                std::cout<<"Las Actividades disponibles actualmente son:\n";
                std::cout<<"________________________________________________________\n";
                foroCopy.GetTitulos();
                std::cout<<"\n________________________________________________________\n";
                break;
            case 2:
                //foro añadir usuario a actividad
                std::cout << "Ingrese el titulo de la actividad:\n";
                std::cin >> search;
                aux = foroCopy.GetActividad(search);
                foroCopy.AddUserToActiv(aux);

                //Usuario apuntarse ac
                user.Preinscribe(aux);
                break;
            case 3:
                std::cout << "Menú:\n";
                std::cout << "1.Cambiar contraseña.\n";
                std::cout << "2.Cambiar nombre\n";
                std::cout << "0.Salir\n";
                std::cin >> option;
                switch(option)
                {
                    case 1:
                        std::cout << "Ingrese la nueva contraseña\n";
                        std::cin.ignore();
                        std::getline(std::cin, new_password);
                        user.CambiaContrasenia(new_password);
                        infCopy.DeleteUsuario(user);
                        infCopy.AddUsuario(user);
                        infCopy.borrarArchivo("Lista_Usuarios.txt");
                        infCopy.FileDatosUsuarios();  
                        break;
                    case 2:
                        std::cout << "Ingrese el nuevo nombre: ";
                        std::cin.ignore();
                        std::getline(std::cin, new_name);
                        user.CambiaNombre(new_name);
                        infCopy.DeleteUsuario(user);
                        infCopy.AddUsuario(user);
                        infCopy.borrarArchivo("Lista_Usuarios.txt");
                        infCopy.FileDatosUsuarios();  
                        break;
                    case 0:
                        infCopy.borrarArchivo("Lista_Usuarios.txt");
                        infCopy.FileDatosUsuarios();           
                        std::cout << "Saliendo...\n";
                        break;
                    default:
                        std::cout << "Opción no válida. Intente de nuevo.\n";
                        break;
                }
                break;
            case 4:
                std::cout<<"\n________________________________________________________\n";
                std::cout<<"Las Actividades a las que actualmente estas apuntado son:\n";
                std::cout<<"________________________________________________________\n";
                user.VerPreInscripcion();
                std::cout<<"\n________________________________________________________\n";
                break;
            case 0:
                std::cout << "Saliendo...\n";
                user.FileDataUser(file_name);
                break;  // Agregado para evitar el error
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
                break;
        }
        
    } while(on != 0);
}

void Admin::AdminMenu(Admin user)
{
    foroCopy.LeerDatosActividades();
    infCopy.LeerDatosUsuarios();
    do
    {
        std::cout << "Menú:\n";
        std::cout << "1.Menú Actividades\n";
        std::cout << "2.Menú Sistema\n";
        std::cout << "0.Salir\n";
        std::cin >> on;

        switch(on)
        {
            case 1:
                foroCopy.Control_actividad(user);
                break;
            case 2:
                infCopy.ProgramaSystemAdmin();
                break;
            case 0:
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
                break;
        }

    } while(on != 0);
}

void Director::DirectorMenu(Director user)
{
    foroCopy.LeerDatosActividades();
    infCopy.LeerDatosUsuarios();
    int option;
    do
    {
        std::cout << "Menú:\n";
        std::cout << "1.Menú Actividades\n";
        std::cout << "2.Visualizar Actividades\n";
        std::cout << "3.Editar Perfil\n";
        std::cout << "0.Salir\n";
        std::cin >> on;
        switch(on)
        {
            case 1:
                foroCopy.Control_actividad(user);
                break;
            case 2:
                std::cout<<"\n________________________________________________________\n";
                std::cout<<"Las Actividades disponibles actualmente son:\n";
                std::cout<<"________________________________________________________\n";
                foroCopy.GetTitulos();
                std::cout<<"\n________________________________________________________\n";
                break;
            case 3:
                std::cout << "Menú:\n";
                std::cout << "1.Cambiar contraseña.\n";
                std::cout << "2.Cambiar nombre\n";
                std::cout << "0.Salir\n";
                std::cin >> option;
                switch(option)
                {
                    case 1:
                        std::cout << "Ingrese la nueva contraseña\n";
                        std::cin.ignore();
                        std::getline(std::cin, new_password);
                        user.CambiaContrasenia(new_password);
                        break;
                    case 2:
                        std::cout << "Ingrese el nuevo nombre: ";
                        std::cin.ignore();
                        std::getline(std::cin, new_name);
                        user.CambiaNombre(new_name);
                        break;
                    case 0:
                        std::cout << "Saliendo...\n";
                        break;
                    default:
                        std::cout << "Opción no válida. Intente de nuevo.\n";
                        break;
                }
                break;
            case 0:
                break;  // Agregado para evitar el error
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
                break;
        }

    } while(on != 0);
}
