#include "gtest/gtest.h"
#include <actividades.h>  // Asegúrate de incluir el archivo de la clase Actividad

// Prueba para el constructor y los métodos de acceso
TEST(ActividadTest, ConstructorYAcceso) {
    Actividad actividad("Título de prueba", "Creador de prueba", "Descripción de prueba", 10);

    EXPECT_EQ(actividad.GetTitulo(), "Título de prueba");
    EXPECT_EQ(actividad.GetCreador(), "Creador de prueba");
    EXPECT_EQ(actividad.GetDescripcion(), "Descripción de prueba");
    EXPECT_EQ(actividad.GetNumUsers(), 10);
}

// Prueba para el método SetNumUsers
TEST(ActividadTest, SetNumUsers) {
    Actividad actividad("Título de prueba", "Creador de prueba", "Descripción de prueba", 10);

    // Prueba con un número positivo
    EXPECT_TRUE(actividad.SetNumUsers(20));
    EXPECT_EQ(actividad.GetNumUsers(), 20);

    // Prueba con un número negativo
    EXPECT_FALSE(actividad.SetNumUsers(-5));
    // El número de usuarios no debería haber cambiado
    EXPECT_EQ(actividad.GetNumUsers(), 20);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
