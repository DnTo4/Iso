#include "gtest/gtest.h"
#include "actividades/actividades.h"  // Asegúrate de incluir el archivo de la clase Actividad

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

// Prueba para el método GetInfo
TEST(ActividadTest, GetInfo) {
    Actividad actividad("Título de prueba", "Creador de prueba", "Descripción de prueba", 10);

    // Captura la salida estándar para comprobar la información impresa
    testing::internal::CaptureStdout();

    actividad.GetInfo();

    // Obtiene la salida estándar capturada
    std::string output = testing::internal::GetCapturedStdout();

    // Verifica que la información impresa sea la esperada
    EXPECT_NE(output.find("Título: Título de prueba"), std::string::npos);
    EXPECT_NE(output.find("Creador: Creador de prueba"), std::string::npos);
    EXPECT_NE(output.find("Descripción: Descripción de prueba"), std::string::npos);
    EXPECT_NE(output.find("Número de Usuarios: 10"), std::string::npos);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
