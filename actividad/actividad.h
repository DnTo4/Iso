#ifndef ACTIVIDAD_H
#define ACTIVIDAD_H

#include <iostream>
#include <string>

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
            std::cout<<"La información de esta Actividad: "<<std::endl;
            std::cout<<GetTitulo()<<std::endl;
            std::cout<<GetCreador()<<std::endl;
            std::cout<<GetDescripcion()<<std::endl;
            std::cout<<GetNumUsers()<<std::endl;
        };

};

#endif