#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "actividad.h"

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

bool Foro::FileDatosActividades(){
    std::ofstream fichero("Lista_Actividades.txt", std::ios::app);
        if(fichero.is_open()){
            for (auto it = list_actividades_.begin(); it != list_actividades_.end(); it++) {
                fichero << it->GetTitulo() << "|" << it->GetCreador() <<"|" << it->GetDescripcion() <<"|" << it->GetNumUsers()<<'\n';
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