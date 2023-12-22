#include <gtest/gtest.h>
#include <usuario.h>
#include <actividades.h>
#include <gmock/gmock.h>
#include "actividades.h"
using ::testing::StartsWith;

TEST (Usuario, Inscripcion)
{
    Actividad ac1("Futbol", "i22tobur");
    Actividad ac2("Basket", "i22tagrd");
    Actividad ac3("Volley", "i22moria");

    Usuario user("i22cafe", "2004", "Usuario");

    EXPECT_TRUE(user.Preinscribe(ac1));
    EXPECT_TRUE(user.Preinscribe(ac2));
    EXPECT_TRUE(user.Preinscribe(ac3));
    EXPECT_FALSE(user.Preinscribe(ac3)); // <-- Ya esta inscrito
}

TEST (Usuario, Anular_Inscripcion)
{
    Actividad ac1("Futbol", "i22tobur");
    Actividad ac2("Basket", "i22tagrd");
    Actividad ac3("Volley", "i22moria");

    Usuario user("i22cafe", "2004", "Usuario");

    EXPECT_TRUE(user.Preinscribe(ac1));
    EXPECT_TRUE(user.Preinscribe(ac2));
    EXPECT_TRUE(user.Preinscribe(ac3));
    EXPECT_TRUE(user.Desapuntarse("Futbol"));
    EXPECT_TRUE(user.Desapuntarse("Basket"));
    EXPECT_TRUE(user.Desapuntarse("Volley"));
    EXPECT_FALSE(user.Desapuntarse("Volley")); // <-- No esta inscrito
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}