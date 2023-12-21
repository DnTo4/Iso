#include "systema.h"
#include <iostream>
#include <fstream>
#include <sstream>

bool Systema::AddUsuario(Persona usuario)//--->And
{
    for(auto it=list_usuarios_.begin(); it!=list_usuarios_.end();it++){
       if(it->ObtenerEmail()==usuario.ObtenerEmail()){
        std::cout<<"Ese usuario ya esta registrado..."<<std::endl;
        return false;
       } 
    }
    list_usuarios_.push_back(usuario);
    numero_usuarios_++;
    std::cout<<"Usuario añadido correctamente."<<std::endl;
    return true;

}

bool Systema::DeleteUsuario(std::string correo)
{
    if (list_usuarios_.empty()) {return false;}

    for(auto it=list_usuarios_.begin(); it!=list_usuarios_.end();it++){
     if(it->ObtenerEmail()==correo){
        list_usuarios_.erase(it);
        numero_usuarios_=numero_usuarios_-1;
        return true;
     }
    }
    return false;    
}

bool Systema::EditUsuario(Persona usuario)
{
    int opcion;
    std::string new_password;
    std::string new_facultad, new_name;

    DeleteUsuario(usuario);
    do {
        std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout << "           Menú\n";
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout << "1. Modificar Contraseña\n";
        std::cout << "2. Modificar Facultad\n";
        std::cout << "3. Modificar Nombre\n";
        std::cout << "4. Mostrar Información\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;


        switch (opcion) {
        case 1:
            std::cout << "Ingrese la nueva contraseña\n";
            std::cin.ignore();
            std::getline(std::cin, new_password);
            usuario.CambiaContrasenia(new_password);
            break;
        case 2:
            std::cout << "Ingrese el nuevo nombre del creador: ";
            std::cin.ignore();
            std::getline(std::cin, new_facultad);
            usuario.CambiaFacultad(new_facultad);
            break;
        case 4:
            usuario.MostrarPersona();
            break;
        case 3:
            std::cout << "Ingrese el nuevo nombre: ";
            std::cin.ignore();
            std::getline(std::cin, new_name);
            usuario.CambiaNombre(new_name);
            break;
        case 0:
            std::cout << "Saliendo del programa...\n";
            break;
        default:
            std::cout << "Opcion invalida. Intente de nuevo.\n";
            break;
        }

    } while (opcion != 0);
    
    AddUsuario(usuario);
    std::cout<<"El usuario ha sido modificado correctamente."<<std::endl;
    return true;   
}

bool Systema::FileDatosUsuarios()
{
    // borrarArchivo("Lista_Usuarios.txt");
    std::ofstream fichero("Lista_Usuarios.txt");
        
        if(fichero.is_open()){
            for (auto it = list_usuarios_.begin(); it != list_usuarios_.end(); it++) {

                fichero << it->ObtenerEmail() << "|" << it->ObtenerContrasenia() <<"|" 
                << it->ObtenerRol() <<"|" << it->ObtenerDni()<<"|"<< it->ObtenerNombre() <<"|"
                << it->ObtenerFacultad() <<"|" << '\n';
            }
            fichero.close();
            std::cout<< "Los datos se han guardado correctamente ..."<<std::endl;
            return true;
        }
        else{
            std::cout<< "Ha habido un error abriendo el archivo..."<<std::endl;
            return false;
        }
}

bool Systema::LeerDatosUsuarios()
{
    std::string nombreArchivo = "Lista_Usuarios.txt";
    std::ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        return false;
    }
    
    
    std::string linea;
    while (std::getline(archivo, linea)) {
        std::istringstream ss(linea);
        Persona person("empty","empty","empty");

        // Leer datos separados por '|'
        std::string tempEmail, tempPass, tempRol, tempDni, tempFac, tempName;

        // Leer datos separados por '|'
        std::getline(ss, tempEmail, '|');
        std::getline(ss, tempPass, '|');
        std::getline(ss, tempRol, '|');
        std::getline(ss, tempDni, '|');
        std::getline(ss, tempName, '|');
        std::getline(ss, tempFac, '|');

        // Utilizar los métodos de la clase para establecer los valores
        person.CambiaEmail(tempEmail);
        person.CambiaContrasenia(tempPass);
        person.CambiaRol(tempRol);
        person.CambiaDni(tempDni);
        person.CambiaNombre(tempName);
        person.CambiaFacultad(tempFac);

        // Agregar la actividad a la lista
        list_usuarios_.push_back(person);
    }
    archivo.close();
    
    return true; 
}

//
bool Systema::ExisteUsuario(std::string correo)
{
    list_usuarios_.clear();
    LeerDatosUsuarios();
    for (auto it = list_usuarios_.begin(); it != list_usuarios_.end(); it++) {
        if (correo == it->ObtenerEmail()) {return true;}
    }
    return false;
}

bool Systema::ComprobarContrasena(std::string correo, std::string password)
{
    for (auto it = list_usuarios_.begin(); it != list_usuarios_.end(); it++) {
        if (correo == it->ObtenerEmail()&&password == it->ObtenerContrasenia()) {
            return true;
        }
    }
    return false;   
}

Persona Systema::GetUser(std::string correo)
{
    for (auto it = list_usuarios_.begin(); it != list_usuarios_.end(); it++) {
        if (correo == it->ObtenerEmail()) {
            Persona aux(it->ObtenerEmail(),it->ObtenerContrasenia(), it->ObtenerRol());  // Crear un objeto Actividad auxiliar
            // Copiar los atributos de la actividad encontrada a la actividad auxiliar
            aux.CambiaDni(it->ObtenerDni());
            aux.CambiaNombre(it->ObtenerNombre());
            aux.CambiaFacultad(it->ObtenerFacultad());
            // Puedes detener el bucle una vez que encuentras la actividad deseada
            return aux;
        }
    }
    exit(EXIT_FAILURE);
}

void Systema::ProgramaSystemAdmin()
{
    Systema sistema;
    Persona nueva_person("empty","empty","empty");
    int opcion, rol, fac;
    std::string new_email, new_pass, new_name;
    sistema.LeerDatosUsuarios();//
    do {
        std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout << "           Menú\n";
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout << "1. Agregar Usuario\n";
        std::cout << "2. Eliminar Usuario\n";
        std::cout << "3. Editar Usuario\n";
        std::cout << "4. Verificar Existencia de Usuario\n";
        std::cout << "5. Mostrar Usuarios del sistema\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;


        switch (opcion) {
            case 1: {
                std::cout << "\nIngrese los datos del nuevo usuario:\n";
                std::cout << "Ingrese el email del nuevo usuario:\n";
                std::cin >> new_email;
                if(sistema.ExisteUsuario(new_email))
                {
                    std::cout<<"Ese usuario ya existe"<<std::endl;
                    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                    break;
                }
                nueva_person.CambiaEmail(new_email);

                std::cout << "Ingrese la contraseña del nuevo usuario:\n";
                std::cin>>new_pass;
                nueva_person.CambiaContrasenia(new_pass);

                std::cout << "Ingrese el Rol del nuevo usuario:\n";
                std::cout << "1.Usuario\n";
                std::cout << "2.Director Actividades\n";
                std::cout << "3.Administrador\n";
                std::cout <<"Selecione el rol:"<<std::endl;
                std::cin>>rol;
            
                switch(rol)
                {
                    case 1:
                        nueva_person.CambiaRol("Usuario");
                        break;
                    case 2:
                        nueva_person.CambiaRol("Director");
                        break;
                    case 3:
                        nueva_person.CambiaRol("Administrador");
                        break;
                    default:
                        nueva_person.CambiaRol("Usuario");
                        break;

                };
                std::cout << "Ingrese el nombre del nuevo usuario:\n";
                std::cin>>new_name;
                nueva_person.CambiaNombre(new_name);
                std::cout << "Ingrese la facultad del nuevo usuario:\n";
                std::cout << "1.ESPC\n";
                std::cout << "2.MEDICINA\n";
                std::cout << "3.DERECHO\n";
                std::cout <<"Selecione la facultad:"<<std::endl;
                std::cin>>fac;
                switch(fac)
                {
                    case 1:
                        nueva_person.CambiaFacultad("EPSC");
                        break;
                    case 2:
                        nueva_person.CambiaFacultad("MEDICINA");
                        break;
                    case 3:
                        nueva_person.CambiaFacultad("DERECHO");
                        break;
                    default:
                        nueva_person.CambiaFacultad("UCO");
                        break;

                };
                
                //sistema.DeleteUsuario(new_email);
                sistema.AddUsuario(nueva_person);
                std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                // sistema.borrarArchivo("Lista_Usuarios.txt");
                // sistema.FileDatosUsuarios();
                break;
            }
            case 2: {
                std::cout << "Ingrese el email del usuario a borrar:\n";
                std::cin >> new_email;
                if(sistema.ExisteUsuario(new_email)==false)
                {
                    std::cout<<"Ese usuario no existe"<<std::endl;
                    break;
                }
                sistema.DeleteUsuario(new_email);
                std::cout <<"Ese usuario ya no existe\n";
                std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                // sistema.borrarArchivo("Lista_Usuarios.txt");
                // sistema.FileDatosUsuarios();
                break;
            }
            case 3: {
                // Lógica para editar usuario
                std::cout << "\nIngrese el email del usuario a modificar: ";
                std::cin >> new_email;
                if(sistema.ExisteUsuario(new_email)==false)
                {
                    std::cout<<"Ese usuario no existe"<<std::endl;
                    break;
                }
                sistema.EditUsuario(sistema.GetUser(new_email));
                std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                // sistema.borrarArchivo("Lista_Usuarios.txt");
                // sistema.FileDatosUsuarios();
                break;
            }
            case 4: {
                // Lógica para verificar existencia de usuario
                std::cout << "\nIngrese el email del usuario buscado: ";
                std::cin >> new_email;
                if(sistema.ExisteUsuario(new_email)==false)
                {
                    std::cout<<"Ese usuario "<< new_email<<" no existe"<<std::endl;
                    break;
                }
                std::cout<<"El usuario " << new_email <<" existe"<<std::endl;
                break;
            }
            case 5:{
                std::cout << "\n==========================================\n";
                std::cout << "        Usuarios en BOBI\n";
                std::cout << "==========================================\n";

                sistema.GetUsuariosSis();

                std::cout << "==========================================\n\n";

            }
            case 0: {
                std::cout << "Saliendo del programa...\n";
                sistema.borrarArchivo("Lista_Usuarios.txt");
                sistema.FileDatosUsuarios();
                break;
            }
            default: {
                std::cout << "Opción no válida. Intente de nuevo.\n";
                break;
            }
        }
    } while (opcion != 0);   
}

bool Systema::borrarArchivo(const std::string& nombreArchivo) {
    std::ofstream ofs;
    ofs.open("Lista_Usuarios.txt", std::ofstream::out | std::ofstream::trunc);
    ofs.close();
    return true;

}

void Systema::GetUsuariosSis()
{
    // borrarArchivo("Lista_Usuarios.txt");
    // FileDatosUsuarios();
    // list_usuarios_.clear();
    // LeerDatosUsuarios();
    if (list_usuarios_.empty()) {
        std::cout << "No hay usuarios\n";
    } 
    else {
        for (auto it = list_usuarios_.begin(); it != list_usuarios_.end(); it++) {
           std::cout <<" -" << it->ObtenerEmail() << "|" << it->ObtenerContrasenia() <<"|" 
                << it->ObtenerRol() <<"|" << it->ObtenerDni()<<"|"<< it->ObtenerNombre() <<"|"
                << it->ObtenerFacultad() <<"|" << '\n';
        }
    }
}