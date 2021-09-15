#include <gtest/gtest.h>

#include "../src/servicioPostal.h"

namespace
{
    TEST(UnitTestPeso13_Clase1, CalculoEnvio_Test)
    {
        ServicioPostal envio {2, 100, 1};
        float actual = envio.CalculoEnvio();
        float expected = 19.5;
        EXPECT_EQ(expected, actual);
    }

    TEST(UnitTestPeso13_Clase2, CalculoEnvio_Test)
    {
        ServicioPostal envio {2, 100, 2};
        float actual = envio.CalculoEnvio();
        float expected = 1.95;
        EXPECT_EQ(expected, actual);
    }    

    TEST(UnitTestPeso13_Clase3, CalculoEnvio_Test)
    {
        ServicioPostal envio {2, 100, 3};
        float actual = envio.CalculoEnvio();
        float expected = 1.5;
        EXPECT_EQ(expected, actual);
    }    

    TEST(UnitTestPeso48_Clase1, CalculoEnvio_Test)
    {
        ServicioPostal envio {5, 100, 1};
        float actual = envio.CalculoEnvio();
        float expected = 45;
        EXPECT_EQ(expected, actual);
    }    

    TEST(UnitTestPeso48_Clase2, CalculoEnvio_Test)
    {
        ServicioPostal envio {5, 100, 2};
        float actual = envio.CalculoEnvio();
        float expected = 4.5;
        EXPECT_EQ(expected, actual);
    }    

    TEST(UnitTestPeso48_Clase3, CalculoEnvio_Test)
    {
        ServicioPostal envio {5, 100, 3};
        float actual = envio.CalculoEnvio();
        float expected = 1.6;
        EXPECT_EQ(expected, actual);
    }    

    TEST(UnitTestPeso9_Clase1, CalculoEnvio_Test)
    {
        ServicioPostal envio {10, 100, 1};
        float actual = envio.CalculoEnvio();
        float expected = 50;
        EXPECT_EQ(expected, actual);
    }

    TEST(UnitTestPeso9_Clase2, CalculoEnvio_Test)
    {
        ServicioPostal envio {10, 100, 2};
        float actual = envio.CalculoEnvio();
        float expected = 5;
        EXPECT_EQ(expected, actual);
    }

    TEST(UnitTestPeso9_Clase3, CalculoEnvio_Test)
    {
        ServicioPostal envio {10, 100, 3};
        float actual = envio.CalculoEnvio();
        float expected = 1.7;
        EXPECT_EQ(expected, actual);
    }        
}