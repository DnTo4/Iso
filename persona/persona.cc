#include "persona.h"
#include <iostream>

/*Constructor clase Pesona*/
Persona::Persona(std::string dni, std::string email,std::string contrasenia, std::string nombre, std::string rol, std::string facultad)
{
    dni_ = dni;
    email_ = email;
    contrasenia_ = contrasenia;
    nombrecompleto_ = nombre;
    rol_ = rol;
    facultad_ = facultad;
}

/*Imprime por pantalla todos los datos de una persona*/
void Persona::MostrarPersona()
{
    std::cout << "DNI: " << dni_ << "\n"; 
    std::cout << "Nombre completo: " << nombrecompleto_ << "\n"; 
    std::cout << "Correo: " << email_ << "\n"; 
    std::cout << "Facultad: " << facultad_ << "\n"; 
    std::cout << "Rol: " << rol_ << "\n";
}

