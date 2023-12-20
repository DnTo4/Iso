#include "usuario.h"
#include <iostream>
#include <fstream>
#include <sstream>

bool Usuario::Preinscribe(Actividad act)
{
    for(auto it = listaPreinscrito_.begin(); it != listaPreinscrito_.end(); it++)
    {
        if(it->GetTitulo() == act.GetTitulo())
        {
            std::cout << "El usuario ya se encuentra preinscrito en esta actividad\n";
            return false ;
        }
    }
    listaPreinscrito_.push_back(act);
    return true;
}

bool Usuario::Inscribe(Actividad act)
{
    for(auto it = listaInscrito_.begin(); it != listaInscrito_.end(); it++)
    {
        if(it->GetTitulo() == act.GetTitulo())
        {
            std::cout << "El usuario ya se encuentra inscrito a esta actividad\n";
            return false;
        }
        else{listaPreinscrito_.push_back(act);}
    }

    for(auto it = listaPreinscrito_.begin(); it != listaPreinscrito_.end(); it++)
    {
        if(it->GetTitulo() == act.GetTitulo()){listaPreinscrito_.erase(it);}
    }

    listaInscrito_.push_back(act);
    return true;
}

// void Usuario::UserMenu(Usuario user)
// {
//     foroCopy.LeerDatosActividades();
//     infCopy.LeerDatosUsuarios();
//     Actividad aux(user.ObtenerEmail(),user.ObtenerContrasenia(),user.ObtenerRol());
//     int option;
//     std::string file_name = user.ObtenerNombre()+".txt";
//     user.LeerDataUser(file_name);
//     do
//     {
//         std::cout << "Menú:\n";
//         std::cout << "1.Visualizar actividades disponibles.\n";
//         std::cout << "2.Apuntarse a una actividad\n";
//         std::cout << "3.Editar perfil\n";
//         std::cout << "4.Actividades a las que estoy preinscrito\n";
//         std::cout << "0.Salir\n";
//         std::cin >> on;

//         switch(on)
//         {
//             case 1:
//                 std::cout<<"\n________________________________________________________\n";
//                 std::cout<<"Las Actividades disponibles actualmente son:\n";
//                 std::cout<<"________________________________________________________\n";
//                 foroCopy.GetTitulos();
//                 std::cout<<"\n________________________________________________________\n";
//                 break;
//             case 2:
//                 //foro añadir usuario a actividad
//                 std::cout << "Ingrese el titulo de la actividad:\n";
//                 std::cin >> search;
//                 aux = foroCopy.GetActividad(search);
//                 foroCopy.AddUserToActiv(aux);

//                 //Usuario apuntarse ac
//                 user.Preinscribe(aux);
//                 break;
//             case 3:
//                 std::cout << "Menú:\n";
//                 std::cout << "1.Cambiar contraseña.\n";
//                 std::cout << "2.Cambiar nombre\n";
//                 std::cout << "0.Salir\n";
//                 std::cin >> option;
//                 switch(option)
//                 {
//                     case 1:
//                         std::cout << "Ingrese la nueva contraseña\n";
//                         std::cin.ignore();
//                         std::getline(std::cin, new_password);
//                         user.CambiaContrasenia(new_password);
//                         infCopy.DeleteUsuario(user);
//                         infCopy.AddUsuario(user);
//                         infCopy.borrarArchivo("Lista_Usuarios.txt");
//                         infCopy.FileDatosUsuarios();  
//                         break;
//                     case 2:
//                         std::cout << "Ingrese el nuevo nombre: ";
//                         std::cin.ignore();
//                         std::getline(std::cin, new_name);
//                         user.CambiaNombre(new_name);
//                         infCopy.DeleteUsuario(user);
//                         infCopy.AddUsuario(user);
//                         infCopy.borrarArchivo("Lista_Usuarios.txt");
//                         infCopy.FileDatosUsuarios();  
//                         break;
//                     case 0:
//                         infCopy.borrarArchivo("Lista_Usuarios.txt");
//                         infCopy.FileDatosUsuarios();           
//                         std::cout << "Saliendo...\n";
//                         break;
//                     default:
//                         std::cout << "Opción no válida. Intente de nuevo.\n";
//                         break;
//                 }
//                 break;
//             case 4:
//                 std::cout<<"\n________________________________________________________\n";
//                 std::cout<<"Las Actividades a las que actualmente estas apuntado son:\n";
//                 std::cout<<"________________________________________________________\n";
//                 user.VerPreInscripcion();
//                 std::cout<<"\n________________________________________________________\n";
//                 break;
//             case 0:
//                 std::cout << "Saliendo...\n";
//                 user.FileDataUser(file_name);
//                 break;  // Agregado para evitar el error
//             default:
//                 std::cout << "Opción no válida. Intente de nuevo.\n";
//                 break;
//         }
        
//     } while(on != 0);
// }

void Usuario::VerPreInscripcion()
{
    for(auto it = listaPreinscrito_.begin(); it != listaPreinscrito_.end(); it++)
    {
        std::cout <<" -"<<it->GetTitulo() << "|" << it->GetCreador() << "\n";
    }
}

bool Usuario::FileDataUser(std::string name_file)
{    
    std::ofstream fichero(name_file, std::ios::app);
        if(fichero.is_open()){
            for (auto it = listaPreinscrito_.begin(); it != listaPreinscrito_.end(); it++) {
                fichero <<it->GetTitulo() << "|" << it->GetCreador() 
           <<"|" << it->GetDescripcion() <<"|" << it->GetNumUsers()
           <<"|"<<'\n';
            }
            fichero.close();
            return true;
        }
        else{
            std::cout<< "Ha habido un error abriendo el archivo..."<<std::endl;
            return false;
        }
}

bool Usuario::LeerDataUser(std::string name_file)
{
    std::ifstream archivo(name_file);
    if (!archivo.is_open()) {
        // std::ofstream archivo_escritura(nombreArchivo);
        // // Verificar si la apertura para lectura fue exitosa después de intentar crear el archivo
        // if (!archivo_escritura.is_open()) {
        //     std::cerr << "Error al abrir o crear el archivo: " << nombreArchivo << std::endl;
        //     archivo_escritura.close();
        return false;
        // }
        // else{
        //     archivo_escritura.close();
        //     return true;
        // }
    }
    
    std::string linea;
    while (std::getline(archivo, linea)) {
        std::istringstream ss(linea);
        Actividad actividad("empty","empty");

        // Leer datos separados por '|'
        std::string tempTitulo, tempCreador, tempDescripcion;
        int tempNumUsers;

        // Leer datos separados por '|'
        std::getline(ss, tempTitulo, '|');
        std::getline(ss, tempCreador, '|');
        std::getline(ss, tempDescripcion, '|');
        ss >> tempNumUsers;

        // Utilizar los métodos de la clase para establecer los valores
        actividad.SetTitulo(tempTitulo);
        actividad.SetCreador(tempCreador);
        actividad.SetDescripcion(tempDescripcion);
        actividad.SetNumUsers(tempNumUsers);


        // Agregar la actividad a la lista
        listaPreinscrito_.push_back(actividad);
    }
    archivo.close();
    
    return true;
}