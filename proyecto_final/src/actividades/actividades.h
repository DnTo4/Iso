#ifndef _ACTIVIDAD_
#define _ACTIVIDAD_

#include <string>
#include <iostream>

class Actividad {
    private:
        std::string nombre_creador_;
        std::string titulo_;
        std::string descripcion_;
        int num_usuarios_;


    public:
        Actividad(std::string titulo, std::string nombre_creador, 
            std::string descripcion = "empty", int num_usuarios = 0);

        void SetTitulo(std::string titulo){titulo_=titulo;}
        void SetCreador(std::string nombre_creador){nombre_creador_=nombre_creador;}
        void SetDescripcion(std::string descripcion){descripcion_=descripcion;}

        bool SetNumUsers(int num_usuarios);


        std::string GetTitulo(){return titulo_;};
        std::string GetCreador(){return nombre_creador_;};
        std::string GetDescripcion(){return descripcion_;};
        int GetNumUsers(){return num_usuarios_;};

        void GetInfo();

};

#endif