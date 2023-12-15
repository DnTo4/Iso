#include <iostream>
#include <string>
#include "actividad.h"

int main(){
    
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
    return 0;
};
