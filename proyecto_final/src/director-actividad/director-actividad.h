#ifndef _DIRECTOR_
#define _DIRECTOR_

#include <string>
#include "persona.h"

class Director: public Persona //--->And
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

#endif