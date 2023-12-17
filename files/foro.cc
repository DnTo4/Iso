#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "admin.h"

Actividad::Actividad(std::string titulo, std::string nombre_creador, std::string descripcion, int num_usuarios)
{
    titulo_=titulo;
    nombre_creador_=nombre_creador;
    descripcion_=descripcion;
    num_usuarios_=num_usuarios;
};

void Foro::DeleteListaActividades(){
    list_actividades_.clear();
    num_actividades_=0;
};

bool Foro::DeleteActividad(std::string id_title){
    if (list_actividades_.empty()) {return false;}

    for(auto it=list_actividades_.begin(); it!=list_actividades_.end();it++){
     if(it->GetTitulo()==id_title){
        list_actividades_.erase(it);
        num_actividades_=num_actividades_-1;
        return true;
     }
    }
    return false;
};

bool Foro::AddActividad(Actividad activ){
    for(auto it=list_actividades_.begin(); it!=list_actividades_.end();it++){
       if(it->GetTitulo()==activ.GetTitulo()){
        std::cout<<"Ese Titulo ya corresponde a una actividad..."<<std::endl;
        return false;
       } 
    }
    list_actividades_.push_back(activ);
    num_actividades_++;
    std::cout<<"Actividad añadida correctamente."<<std::endl;
    return true;

};

bool Foro::ModActividad(Actividad activ){
    int opcion;
    std::string new_title;
    std::string new_creator;
    std::string new_descripcion;
    int new_num_usrs;
    DeleteActividad(activ);
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Modificar Titulo\n";
        std::cout << "2. Modificar Creador\n";
        std::cout << "3. Modificar Descripcion\n";
        std::cout << "4. Modificar Numero de Usuarios\n";
        std::cout << "5. Mostrar Informacion\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            std::cout << "Ingrese el nuevo titulo: ";
            std::cin.ignore();
            std::getline(std::cin, new_title);
            activ.SetTitulo(new_title);
            break;
        case 2:
            std::cout << "Ingrese el nuevo nombre del creador: ";
            std::cin.ignore();
            std::getline(std::cin, new_creator);
            activ.SetCreador(new_creator);
            break;
        case 3:
            std::cout << "Ingrese la nueva descripcion: ";
            std::cin.ignore();
            std::getline(std::cin, new_descripcion);
            activ.SetDescripcion(new_descripcion);
            break;
        case 4:
            std::cout << "Ingrese el nuevo numero de usuarios: ";
            std::cin >> new_num_usrs;
            activ.SetNumUsers(new_num_usrs);
            break;
        case 5:
            activ.GetInfo();
            break;
        case 0:
            std::cout << "Saliendo del programa...\n";
            break;
        default:
            std::cout << "Opcion invalida. Intente de nuevo.\n";
            break;
        }

    } while (opcion != 0);
    
    AddActividad(activ);
    std::cout<<"La actividad ha sido modificada correctamente."<<std::endl;
    return true;
};

std::vector<std::string> Foro::GetTitulos() {
    std::vector<std::string> vecaux;

    if (list_actividades_.empty()) {
        return vecaux;
    } else {
        for (auto it = list_actividades_.begin(); it != list_actividades_.end(); it++) {
            vecaux.push_back(it->GetTitulo());
        }
    }

    return vecaux;
};

bool Foro::LeerDatosActividades(){
    std::string nombreArchivo = "Lista_Actividades.txt";
    std::ifstream archivo(nombreArchivo);
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
        list_actividades_.push_back(actividad);
    }
    archivo.close();
    
    std::cout << "Sincronizando datos..." << std::endl;
    return true;
};

bool Foro::FileDatosActividades(){
    std::ofstream fichero("Lista_Actividades.txt", std::ios::app);
        if(fichero.is_open()){
            for (auto it = list_actividades_.begin(); it != list_actividades_.end(); it++) {
                fichero << it->GetTitulo() << "|" << it->GetCreador() <<"|" << it->GetDescripcion() <<"|" << it->GetNumUsers()<<"|"<<'\n';
            }
            fichero.close();
            std::cout<< "Los datos se han guardado correctamente ..."<<std::endl;
            return true;
        }
        else{
            std::cout<< "Ha habido un error abriendo el archivo..."<<std::endl;
            return false;
        }
};
bool Foro::borrarArchivo(const std::string& nombreArchivo) {
    if (std::remove(nombreArchivo.c_str()) == 0) {
        std::cout << "Archivo '" << nombreArchivo << "' borrado correctamente.\n";
        return true;
    } else {
        std::cerr << "Error al intentar borrar el archivo '" << nombreArchivo << "'.\n";
        return false;
    }
};
Actividad Foro::GetActividad(std::string titulo) {
    for (auto it = list_actividades_.begin(); it != list_actividades_.end(); it++) {
        if (titulo == it->GetTitulo()) {
            Actividad aux(it->GetTitulo(),it->GetCreador());  // Crear un objeto Actividad auxiliar
            // Copiar los atributos de la actividad encontrada a la actividad auxiliar
            aux.SetDescripcion(it->GetDescripcion());
            aux.SetNumUsers(it->GetNumUsers());
            // Puedes detener el bucle una vez que encuentras la actividad deseada
            return aux;
        }
    }
    std::cout<<"No se a encontrado la actividad especidicada"<<std::endl;
    exit(EXIT_FAILURE);
};

std::string LongString(std::string descripcion)
{
    std::getline(std::cin, descripcion);
    return descripcion;
};
bool Foro::ExisteActividad(std::string title){
    for (auto it = list_actividades_.begin(); it != list_actividades_.end(); it++) {
        if (title == it->GetTitulo()) {return true;}
    }
    return false;
};
void Foro::Control_actividad(Persona pers){
    
    Foro miForo;

    int opcion;
    std::string id_title;

    // Agregar Actividad
    std::string newTitle;
    std::string newCreator;
    std::string newDescription;
    std::string search;
    
    LeerDatosActividades();

    Actividad nuevaActividad(newTitle, newCreator);

    do {
        std::cout<<"\n________________________________________________________";
        std::cout << "\nMenu Principal:\n";
        std::cout << "1. Agregar Actividad\n";
        std::cout << "2. Modificar Actividad\n";
        std::cout << "3. Eliminar Actividad\n";
        std::cout << "4. Mostrar Títulos de Actividades\n";
        std::cout << "5. Guardar Datos en Archivo\n";
        std::cout << "6. Mostrar Datos de Actividad\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cout<<"\n________________________________________________________\n";


        switch (opcion) {
            case 1:
                std::cout << "\nIngrese los componentes de la nueva actividad:\n";
                std::cout << "Ingrese el titulo de la actividad:\n";
                std::cin >> newTitle;
                if(miForo.ExisteActividad(newTitle)){
                    std::cout<<"Ese titulo ya esta en uso"<<std::endl;    
                    break;
                }
                nuevaActividad.SetTitulo(newTitle);

                nuevaActividad.SetCreador(pers.ObtenerEmail());
                std::cout << "Para introducir una descripción entre en el menu de modificación de la actividad";
                std::cout<<'\n';
                
                // Asegúrate de tener una función InputInfo() en tu clase Actividad
                miForo.AddActividad(nuevaActividad);
                std::cout<<"\n________________________________________________________\n";
                break;
            case 2:
                // Modificar Actividad
                std::cout << "\nIngrese el título de la actividad a modificar: ";
                std::cin >> id_title;
                miForo.ModActividad(miForo.GetActividad(id_title));
                std::cout<<"\n________________________________________________________\n";
                break;
            case 3:
                // Eliminar Actividad
                std::cout << "\nIngrese el título de la actividad a eliminar: ";
                std::cin >> id_title;
                miForo.DeleteActividad(id_title);
                std::cout <<"Actividad eliminada correctamente\n";
                std::cout<<"\n________________________________________________________\n";
                break;
            case 4:
                // Mostrar Títulos de Actividades utilizando la lista list_actividades_
                std::cout << "\nTítulos de Actividades:\n";
                // if(list_actividades_.empty()){
                //     std::cout<<"(La lista de actividades esta vacia)"<<std::endl;
                // }
                for (auto it=list_actividades_.begin(); it!=list_actividades_.end();it++) {
                    std::cout << "- " << it->GetTitulo() << '\n';
                }
                std::cout << "\n________________________________________________________\n";
                break;
            case 5:
                // Guardar Datos en Archivo
                miForo.borrarArchivo("Lista_Actividades.txt");
                miForo.FileDatosActividades();
                std::cout<<"\n________________________________________________________\n";
                break;
            case 6:
                //Mostrar Info
                std::cout<<"\nIntroduzca el título de la Actividad de la que desea la informacion"<<std::endl;
                std::cin>> search;
                if(miForo.ExisteActividad(search)==false){
                    std::cout<<"\n***Ese titulo no existe***"<<std::endl;    
                    break;
                }
                miForo.GetActividad(search).GetInfo();
                std::cout<<"\n________________________________________________________\n";
                break;
            case 0:
                std::cout << "\nSaliendo del programa...\n";
                miForo.borrarArchivo("Lista_Actividades.txt"); 
                miForo.FileDatosActividades();
                std::cout<<"\n________________________________________________________\n";
                break;
            default:
                std::cout << "\nOpción inválida. Intente de nuevo.\n";
                break;
        }

    } while (opcion != 0);
};