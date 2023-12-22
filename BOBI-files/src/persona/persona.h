#ifndef _PERSONA_
#define _PERSONA_

#include <string>

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

#endif