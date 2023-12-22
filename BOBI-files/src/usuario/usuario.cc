#include "usuario.h"
#include "foro.h"
#include <iostream>
#include <fstream>
#include <sstream>

bool Usuario::Preinscribe(Actividad act)
{
    for(auto it = listaPreinscrito_.begin(); it != listaPreinscrito_.end(); it++)
    {
        if(it->GetTitulo() == act.GetTitulo())
        {
            std::cout << "El usuario ya se encontraba inscrito en esta actividad\n";
            return false ;
        }
    }
    std::cout << "Se acaba de Inscribir en esta actividad\n";
    listaPreinscrito_.push_back(act);
    return true;
}

bool Usuario::Inscribe(Actividad act)
{
    for(auto it = listaPreinscrito_.begin(); it != listaPreinscrito_.end(); it++)
    {
        if (act.GetTitulo() == it->GetTitulo()) {return true;}
    }
    return false;
}

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

bool Usuario::Desapuntarse(std::string actividad)
{
    if (listaPreinscrito_.empty()) {return false;}
        for(auto it=listaPreinscrito_.begin(); it!=listaPreinscrito_.end();it++){
            if(it->GetTitulo()==actividad){
                listaPreinscrito_.erase(it);
                std::cout << "Suscripcion a la actividad: "<< actividad << " finalizada correctamente" << std::endl;        
                return true;
            }
        }
    std::cout << "No estabas inscrito en la actividad" << std::endl;
    return false;
}