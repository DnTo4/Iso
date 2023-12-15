#ifndef ACTIVIDAD_H
#define ACTIVIDAD_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <list>

std::string LongString(std::string descripcion);

class Actividad {
    private:
        std::string nombre_creador_;
        std::string titulo_;
        std::string descripcion_;
        int num_usuarios_;



    public:
        Actividad(std::string titulo, std::string nombre_creador, 
            std::string descripcion = "empty", int num_usuarios = 0);

        void SetTitulo(std::string titulo){titulo_=titulo;};
        void SetCreador(std::string nombre_creador){nombre_creador_=nombre_creador;};
        void SetDescripcion(std::string descripcion){descripcion_=descripcion;};

        bool SetNumUsers(int num_usuarios)
        {
            if(num_usuarios<0){
                std::cout<<"Es imposible tener un numero de subscriptores negativo"<<std::endl;
                return false;
            }
            num_usuarios_=num_usuarios;
            return true;   
        };


        std::string GetTitulo(){return titulo_;};
        std::string GetCreador(){return nombre_creador_;};
        std::string GetDescripcion(){return descripcion_;};
        int GetNumUsers(){return num_usuarios_;};

        void GetInfo(){
        std::cout << "La información de esta Actividad: " << std::endl;
        std::cout << "Título: " << GetTitulo() << std::endl;
        std::cout << "Creador: " << GetCreador() << std::endl;
        std::cout << "Descripción: " << GetDescripcion() << std::endl;
        std::cout << "Número de Usuarios: " << GetNumUsers() << std::endl;
        };

};
class Foro{
        
    private:        
        //Crear una lista
        std::list<Actividad> list_actividades_;
        //Numero de Actividades
        int num_actividades_;

    public:
        Foro(){num_actividades_=0;};
        bool DeleteActividad(std::string id_title);
        bool DeleteActividad(Actividad activ){return DeleteActividad(activ.GetTitulo());};
        void DeleteListaActividades();
        int GetNumActiv(){return num_actividades_;}
        bool AddActividad(Actividad activ);
        bool ModActividad(Actividad activ);
        Actividad GetActividad(std::string titulo);
        std::vector<std::string> GetTitulos();
        bool FileDatosActividades();

};
void Control_actividad(){
    
    Foro miForo;

    int opcion;
    std::string id_title;

    // Agregar Actividad
    std::string newTitle;
    std::string newCreator;
    std::string newDescription;
    std::string search;

    Actividad nuevaActividad(newTitle, newCreator);

    do {
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


        switch (opcion) {
            case 1:


                std::cout << "Ingrese los componentes de la nueva actividad:\n";
                std::cout << "Ingrese el titulo de la actividad:\n";
                std::cin >> newTitle;
                nuevaActividad.SetTitulo(newTitle);
                std::cout << "Ingrese el nombre del creador de la actividad:\n";
                std::cin >> newCreator;
                nuevaActividad.SetCreador(newCreator);
                std::cout << "Para introducir una descripción entre en el menu de modificación de la actividad";
                std::cout<<'\n';
                
                
                // Asegúrate de tener una función InputInfo() en tu clase Actividad
                miForo.AddActividad(nuevaActividad);
                std::cout<<"\n\n________________________________________________________\n\n\n";
                break;
            case 2:
                // Modificar Actividad
                std::cout << "Ingrese el título de la actividad a modificar: ";
                std::cin >> id_title;
                miForo.ModActividad(miForo.GetActividad(id_title));
                std::cout<<"\n\n________________________________________________________\n\n\n";
                break;
            case 3:
                // Eliminar Actividad
                std::cout << "Ingrese el título de la actividad a eliminar: ";
                std::cin >> id_title;
                miForo.DeleteActividad(id_title);
                std::cout<<"\n\n________________________________________________________\n\n\n";
                break;
            case 4:
                // Mostrar Títulos de Actividades
                std::cout << "Títulos de Actividades:\n";
                for (const auto &titulo : miForo.GetTitulos()) {
                    std::cout << "- " << titulo << '\n';
                }
                std::cout<<"\n\n________________________________________________________\n\n\n";
                break;
            case 5:
                // Guardar Datos en Archivo
                miForo.FileDatosActividades();
                std::cout<<"\n\n________________________________________________________\n\n\n";
                break;
            case 6:
                std::cout<<"Introduzca el título de la Actividad de la que desea la informacion"<<std::endl;
                std::cin>> search;
                miForo.GetActividad(search).GetInfo();
                std::cout<<"\n\n________________________________________________________\n\n\n";
                break;
            case 0:
                std::cout << "Saliendo del programa...\n";
                std::cout<<"\n\n________________________________________________________\n\n\n";
                break;
            default:
                std::cout << "Opción inválida. Intente de nuevo.\n";
                break;
        }

    } while (opcion != 0);
};
#endif