#ifndef FORO_H
#define FORO_H
#include <list>
#include <iostream>
#include <string>
#include <vector>
#include "actividad.h"

class Foro{
        
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
        std::vector<std::string> GetTitulos();

};
#endif