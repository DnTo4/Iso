#ifndef _ADMIN_
#define _ADMIN_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <list>
//#include "actividad.h"


class Persona // .H Y .CC
{
    private:

        std::string dni_;
        std::string email_;
        std::string contrasenia_;
        std::string nombrecompleto_;
        std::string rol_;
        std::string facultad_;

    public:

        Persona( std::string email, std::string contrasenia,
         std::string rol, std::string dni="empty",
         std::string nombre="empty", std::string facultad="empty");

        void MostrarPersona();
        void CambiaDni(std::string dni){dni_ = dni;}
        void CambiaEmail(std::string email){email_ = email;}
        void CambiaContrasenia(std::string contrasenia){contrasenia_ = contrasenia;}
        void CambiaNombre(std::string nombre){nombrecompleto_ = nombre;}
        void CambiaRol(std::string rol){rol_ = rol;}
        void CambiaFacultad(std::string facultad){facultad_ = facultad;}
        std::string ObtenerDni(){return dni_;}
        std::string ObtenerEmail(){return email_;}
        std::string ObtenerContrasenia(){return contrasenia_;}
        std::string ObtenerNombre(){return nombrecompleto_;}
        std::string ObtenerRol(){return rol_;}
        std::string ObtenerFacultad(){return facultad_;}

};

class Actividad { // .H Y .CC
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
class Foro{ // .H Y .CC
        
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
        void GetTitulos();
        bool FileDatosActividades();
        bool LeerDatosActividades();
        void Control_actividad(Persona pers);
        bool ExisteActividad(std::string title);
        bool borrarArchivo(const std::string& nombreArchivo);
        void AddUserToActiv(Actividad ac);

};

class Usuario: public Persona //--->And .H Y .CC
{
    private:
        std::list<Actividad> listaPreinscrito_;
        std::list<Actividad> listaInscrito_;
    public:
        Usuario(std::string email, std::string contrasenia,
         std::string rol, std::string dni="empty",
         std::string nombre="empty",
         std::string facultad="empty"):Persona(email, contrasenia,
         rol, dni,nombre, facultad){};
        bool Preinscribe(Actividad act);
        bool Inscribe(Actividad act);
        void UserMenu(Usuario user);
        void VerPreInscripcion();
        bool FileDataUser(std::string name);
        bool LeerDataUser(std::string name);
};
class Director: public Persona //--->And .H Y .CC (no tiene xd)
{
    private:
    public:
        Director(std::string email, std::string contrasenia,
         std::string rol, std::string dni="empty",
         std::string nombre="empty",
         std::string facultad="empty"):Persona(email, contrasenia,
         rol, dni,nombre, facultad){};
        void DirectorMenu(Director user);
};

class Admin: public Persona //--->And .H y .CC (no tiene xd)
{
    private:
    public:
        Admin(std::string email, std::string contrasenia,
         std::string rol, std::string dni="empty",
         std::string nombre="empty",
         std::string facultad="empty"):Persona(email, contrasenia,
         rol, dni,nombre, facultad){};
        void AdminMenu(Admin user);
};

class Systema//--->And .H
{
    private:

        std::list<Persona> list_usuarios_;
        int numero_usuarios_;

    public:

        Systema(){numero_usuarios_=0;};
        bool AddUsuario(Persona usuario);
        bool DeleteUsuario(std::string correo);
        bool DeleteUsuario(Persona usuario){return DeleteUsuario(usuario.ObtenerEmail());};
        int GetNumeroUsuarios(){return numero_usuarios_;};
        bool EditUsuario(Persona usuario);
        bool FileDatosUsuarios();
        bool LeerDatosUsuarios();
        bool ExisteUsuario(std::string correo);
        bool ComprobarContraseña (std::string correo, std::string password);
        Persona GetUser(std::string correo);
        void ProgramaSystemAdmin();
        bool borrarArchivo(const std::string& nombreArchivo);
};

#endif
