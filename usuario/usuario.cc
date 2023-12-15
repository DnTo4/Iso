#include "usuario.h"

/*Añade una actividad a la lista de preinscripciones de un usuario, devuelve false en caso de error*/
bool Preinscribe(Actividad act)
{
    for(auto it = listaPreinscrito_.begin(); it != listaPreinscrito_.end(); it++)
    {
        if(it->GetTitulo() == act.GetTitulo())
        {
            std::cout << "El usuario ya se encuentra preinscrito en esta actividad\n";
            return false ;
        }
        else{listaPreinscrito_.push_back(act);}
    }
    return true;
}

/*Añade una actividad a la lista de preinscripciones de un usuario, devuelve false en caso de error*/
bool Inscribe(Actividad act)
{
    for(auto it = listaInscrito_.begin(); it != listaInscrito_.end(); it++)
    {
        if(it->GetTitulo() == act.GetTitulo())
        {
            std::cout << "El usuario ya se encuentra inscrito a esta actividad\n";
            return false;
        }
        else{listaPreinscrito_.push_back(act);}
    }

    for(auto it = listaPreinscrito_.begin(); it != listaPreinscrito_.end(); it++)
    {
        if(it->GetTitulo() == act.GetTitulo()){listaPreinscrito_.erase(it);}
    }

    listaInscrito_.push_back(act);
    return true;
}