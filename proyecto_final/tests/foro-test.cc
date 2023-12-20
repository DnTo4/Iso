#include "gtest/gtest.h"
#include "foro/foro.h"

TEST(ForoTest, AddActividad) {
    Foro foro;
    Actividad actividad("Título de prueba", "Creador de prueba", "Descripción de prueba", 10);

    EXPECT_TRUE(foro.AddActividad(actividad));
    EXPECT_EQ(foro.GetNumActiv(), 1);
}

TEST(ForoTest, DeleteActividad) {
    Foro foro;
    Actividad actividad("Título de prueba", "Creador de prueba", "Descripción de prueba", 10);

    foro.AddActividad(actividad);

    EXPECT_TRUE(foro.DeleteActividad("Título de prueba"));
    EXPECT_EQ(foro.GetNumActiv(), 0);
}

TEST(ForoTest, ModActividad) {
    Foro foro;
    Actividad actividad("Título de prueba", "Creador de prueba", "Descripción de prueba", 10);

    foro.AddActividad(actividad);

    Actividad nuevaActividad("Nuevo Título", "Nuevo Creador", "Nueva Descripción", 20);
    EXPECT_TRUE(foro.ModActividad(nuevaActividad));

    Actividad actividadModificada = foro.GetActividad("Nuevo Título");
    EXPECT_EQ(actividadModificada.GetCreador(), "Nuevo Creador");
    EXPECT_EQ(actividadModificada.GetDescripcion(), "Nueva Descripción");
    EXPECT_EQ(actividadModificada.GetNumUsers(), 20);
}

TEST(ForoTest, AddUserToActiv) {
    Foro foro;
    Actividad actividad("Título de prueba", "Creador de prueba", "Descripción de prueba", 10);

    foro.AddActividad(actividad);
    foro.AddUserToActiv(actividad);

    Actividad actividadModificada = foro.GetActividad("Título de prueba");
    EXPECT_EQ(actividadModificada.GetNumUsers(), 11);
}

TEST(ForoTest, ExisteActividad) {
    Foro foro;
    Actividad actividad("Título de prueba", "Creador de prueba", "Descripción de prueba", 10);

    foro.AddActividad(actividad);

    EXPECT_TRUE(foro.ExisteActividad("Título de prueba"));
    EXPECT_FALSE(foro.ExisteActividad("Actividad Inexistente"));
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
