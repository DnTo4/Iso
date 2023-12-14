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
#endif