#ifndef _ADMIN_
#define _ADMIN_

#include <string>
#include "persona.h"

class Admin: public Persona //--->And
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

#endif