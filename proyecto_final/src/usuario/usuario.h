#ifndef _USUARIO_
#define _USUARIO_

#include <string>
#include <list>
#include "persona.h"
#include "actividades.h"

class Usuario: public Persona //--->And
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

#endif