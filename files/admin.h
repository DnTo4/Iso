#ifndef _ADMIN_
#define _ADMIN_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <list>
#include "actividad.h"


class Persona
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

class Usuario: public Persona //--->And
{
    private:
        std::list<Actividad> listaPreinscrito_;
        std::list<Actividad> listaInscrito_;
    public:
        Usuario(std::string email, std::string contrasenia,
         std::string rol, std::string dni="empty",
         std::string nombre="empty", std::string facultad="empty");
        bool Preinscribe(Actividad act);
        bool Inscribe(Actividad act);
        void UserMenu();
};
class Director: public Persona //--->And
{
    private:
    public:
        Director(std::string email, std::string contrasenia,
         std::string rol, std::string dni="empty",
         std::string nombre="empty", std::string facultad="empty");
        void DirectorMenu();
};

class Admin: public Persona //--->And
{
    private:
    public:
        Admin(std::string email, std::string contrasenia,
         std::string rol, std::string dni="empty",
         std::string nombre="empty", std::string facultad="empty");
        void AdminMenu();
};

class Systema//--->And
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
        void ProgramUsuario(Persona usuario);
};

#endif
