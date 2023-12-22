#include <gtest/gtest.h>
#include <persona.h>
#include <gmock/gmock.h>
using ::testing::StartsWith;

TEST (Persona, Constructor)
{
    Persona p1("i22tobur", "2004", "Administrador");
    EXPECT_EQ("i22tobur", p1.ObtenerEmail());
    EXPECT_EQ("2004", p1.ObtenerContrasenia());
    EXPECT_EQ("Administrador", p1.ObtenerRol());
    EXPECT_EQ("empty", p1.ObtenerDni());
    EXPECT_EQ("empty", p1.ObtenerNombre());
    EXPECT_EQ("empty", p1.ObtenerFacultad());
}

TEST (Persona, Constructor2)
{
    Persona p1("i22tobur", "2004", "Usuario", "57983423E", "Rafa", "EPSC");
    EXPECT_EQ("i22tobur", p1.ObtenerEmail());
    EXPECT_EQ("2004", p1.ObtenerContrasenia());
    EXPECT_EQ("Usuario", p1.ObtenerRol());
    EXPECT_EQ("57983423E", p1.ObtenerDni());
    EXPECT_EQ("Rafa", p1.ObtenerNombre());
    EXPECT_EQ("EPSC", p1.ObtenerFacultad());
}

TEST (Persona, Setters)
{
    Persona p1("i22tobur", "2004", "Usuario", "57983423E", "Rafa", "EPSC");
    p1.CambiaEmail("i22moria");
    EXPECT_EQ("i22moria", p1.ObtenerEmail());
    p1.CambiaContrasenia("1999");
    EXPECT_EQ("1999", p1.ObtenerContrasenia());
    p1.CambiaRol("Administrador");
    EXPECT_EQ("Administrador", p1.ObtenerRol());
    p1.CambiaDni("27849234F");
    EXPECT_EQ("27849234F", p1.ObtenerDni());
    p1.CambiaNombre("Andres");
    EXPECT_EQ("Andres", p1.ObtenerNombre());
    p1.CambiaFacultad("MEDICINA");
    EXPECT_EQ("MEDICINA", p1.ObtenerFacultad());
}
TEST(Persona, MostrarPersona) {
  Persona p1("i22tagrd", "2004", "Administrador", "65498323T", "Daniel", "EPSC");
  p1.MostrarPersona();
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}