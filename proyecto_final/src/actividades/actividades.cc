#include "actividades.h"

Actividad::Actividad(std::string titulo, std::string nombre_creador, std::string descripcion, int num_usuarios)
{
    titulo_=titulo;
    nombre_creador_=nombre_creador;
    descripcion_=descripcion;
    num_usuarios_=num_usuarios;
}

bool Actividad::SetNumUsers(int num_usuarios)
{
    if(num_usuarios<0){
        std::cout<<"Es imposible tener un numero de subscriptores negativo"<<std::endl;
        return false;
    }
    num_usuarios_=num_usuarios;
    return true;   
}

void Actividad::GetInfo()
{
    std::cout << "La información de esta Actividad: " << std::endl;
    std::cout << "Título: " << GetTitulo() << std::endl;
    std::cout << "Creador: " << GetCreador() << std::endl;
    std::cout << "Descripción: " << GetDescripcion() << std::endl;
    std::cout << "Número de Usuarios: " << GetNumUsers() << std::endl;
}