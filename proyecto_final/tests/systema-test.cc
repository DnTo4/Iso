#include "gtest/gtest.h"
#include <systema.h>

TEST(SystemaTest, AddUsuario) {
    Systema systema;
    Persona usuario("test@gmail.com", "password123", "Usuario");

    EXPECT_TRUE(systema.AddUsuario(usuario));
    EXPECT_FALSE(systema.AddUsuario(usuario));  // Intentar agregar el mismo usuario nuevamente
}

TEST(SystemaTest, DeleteUsuario) {
    Systema systema;
    Persona usuario("test@gmail.com", "password123", "Usuario");

    systema.AddUsuario(usuario);

    EXPECT_TRUE(systema.DeleteUsuario("test@gmail.com"));
    EXPECT_FALSE(systema.DeleteUsuario("usuario_no_existente@gmail.com"));
}

TEST(SystemaTest, ComprobarContrasena) {
    Systema systema;
    Persona usuario("test@gmail.com", "password123", "Usuario");

    systema.AddUsuario(usuario);

    EXPECT_TRUE(systema.ComprobarContrasena("test@gmail.com", "password123"));
    EXPECT_FALSE(systema.ComprobarContrasena("test@gmail.com", "contrasena_incorrecta"));
    EXPECT_FALSE(systema.ComprobarContrasena("usuario_no_existente@gmail.com", "cualquier_contrasena"));
}

// Agrega más pruebas según sea necesario

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
