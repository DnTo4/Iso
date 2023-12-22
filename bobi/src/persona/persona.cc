#include "persona.h"
#include <iostream>


Persona::Persona( std::string email, std::string contrasenia, std::string rol, std::string dni, std::string nombre, std::string facultad){        
    email_ = email;
    contrasenia_ = contrasenia;
    rol_ = rol;
    dni_ = dni;
    nombrecompleto_ = nombre;
    facultad_ = facultad;
}

void Persona::MostrarPersona()//--->And
{
    std::cout << "\n========================================\n";
    std::cout << "      Información del Usuario\n";
    std::cout << "========================================\n";
    std::cout << "DNI:             " << dni_ << "\n";
    std::cout << "Nombre completo: " << nombrecompleto_ << "\n";
    std::cout << "Correo:          " << email_ << "\n";
    std::cout << "Facultad:        " << facultad_ << "\n";
    std::cout << "Rol:             " << rol_ << "\n";
    std::cout << "========================================\n\n";


}