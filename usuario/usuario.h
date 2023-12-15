#ifndef _USUARIO_
#define _USUARIO_

#include <list>
#include "actividad.h"

class Usuario:Public Persona
{
    private:
        std::list<Actividad> listaPreinscrito_;
        std::list<Actividad> listaInscrito_;
    public:
        bool Preinscribe(Actividad act);
        bool Inscribe(Actividad act);
};

#endif
