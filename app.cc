#include <iostream>
#include "files/actividad.h"
#include "files/admin.h"

int main()
{
Systema sys;
int attempts=3;
bool cont=true;

sys.LeerDatosUsuarios();

do{
    std::string nom_usuario, inputContrasenia;
    std::string respuesta; 
    Persona user(nom_usuario, inputContrasenia, "Usuario");

    

    std::cout<<"\n________________________________________________________";
    std::cout<<"\n--Iniciar sesion--"<<std::endl;
    std::cout<<"Introduzca su usuario:"<<std::endl;
    std::cin>>nom_usuario;

    if(sys.ExisteUsuario(nom_usuario)==false)
    {
        std::cout<<"No se a encontrado Usuario"<<std::endl;
        std::cout<<"Desea registrarse (y/n):"<<std::endl;
        std::cin>>respuesta;
        if(respuesta=="y"){
            std::cout << "\nIngrese su contraseña para iniciar sesión: ";
            std::cin >> inputContrasenia;
            user.CambiaContrasenia(inputContrasenia);
            sys.AddUsuario(user);
            sys.FileDatosUsuarios();
        }
        else{exit(EXIT_FAILURE);}
    }
    do{
    std::cout << "\nIngrese su contraseña para iniciar sesión: ";
    std::cin >> inputContrasenia;

    if(sys.ComprobarContraseña(nom_usuario,inputContrasenia)==false)
    {
        std::cout<<"Te quedan "<< attempts << " intententos." <<std::endl;
        attempts--;
        if(attempts==0){
            std::cout<<"Intentos escedidos"<<std::endl;
            exit(EXIT_FAILURE);
        };
        break;
    }
    attempts=0;
    }while(attempts!=0);
    std::cout<<"Usuario Logeado Bienvenido..."<<std::endl;
    cont = false;
}while(cont!=false);



};