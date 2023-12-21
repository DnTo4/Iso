#ifndef _SYSTEMA_
#define _SYSTEMA_

#include <string>
#include <list>
#include "persona.h"

class Systema//--->And
{
    private:

        std::list<Persona> list_usuarios_;
        int numero_usuarios_;

    public:

        Systema(){numero_usuarios_=0;}
        bool AddUsuario(Persona usuario);
        bool DeleteUsuario(std::string correo);
        bool DeleteUsuario(Persona usuario){return DeleteUsuario(usuario.ObtenerEmail());};
        int GetNumeroUsuarios(){return numero_usuarios_;};
        bool EditUsuario(Persona usuario);
        bool FileDatosUsuarios();
        bool LeerDatosUsuarios();
        bool ExisteUsuario(std::string correo);
        bool ComprobarContrasena (std::string correo, std::string password);
        Persona GetUser(std::string correo);
        void ProgramaSystemAdmin();
        bool borrarArchivo(const std::string& nombreArchivo);
        
        void GetUsuariosSis();
};


#endif