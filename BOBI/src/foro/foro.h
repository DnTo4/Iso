#ifndef _FORO_
#define _FORO_

#include <list>
#include <string>
#include "actividades.h"
#include "persona.h"

class Foro{
        
    private:        
        //Crear una lista
        std::list<Actividad> list_actividades_;
        //Numero de Actividades
        int num_actividades_;

    public:
        Foro(){num_actividades_=0;}
        bool DeleteActividad(std::string id_title);
        bool DeleteActividad(Actividad activ){return DeleteActividad(activ.GetTitulo());};
        void DeleteListaActividades();
        int GetNumActiv(){return num_actividades_;}
        bool AddActividad(Actividad activ);
        bool ModActividad(Actividad activ);
        Actividad GetActividad(std::string titulo);

        void GetTitulos(); //
        bool FileDatosActividades(); //
        bool LeerDatosActividades();
        void Control_actividad(Persona pers);
        bool ExisteActividad(std::string title);
        bool borrarArchivo(const std::string& nombreArchivo);
        void AddUserToActiv(Actividad ac, int i);
};

#endif