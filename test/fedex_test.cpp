#include <gtest/gtest.h>

#include "../src/fedex.h"

namespace 
{
    TEST(UnitTestPesoInf4_DistanciaInf500, CalculoEnvio_Test)
    {
        Fedex envio {2, 200};
        float actual = envio.CalculoEnvio();
        float expected = 20;
        EXPECT_EQ(expected, actual);
    }

    TEST(UnitTestPesoInf4_DistanciaSup500, CalculoEnvio_Test)
    {
        Fedex envio {2, 600};
        float actual = envio.CalculoEnvio();
        float expected = 25;
        EXPECT_EQ(expected, actual);
    }

   TEST(UnitTestPesoSup4_DistanciaInf500, CalculoEnvio_Test)
    {
        Fedex envio {6, 200};
        float actual = envio.CalculoEnvio();
        float expected = 23;
        EXPECT_EQ(expected, actual);
    }

    TEST(UnitTestPesoSup4_DistanciaSup500, CalculoEnvio_Test)
    {
        Fedex envio {6, 600};
        float actual = envio.CalculoEnvio();
        float expected = 28;
        EXPECT_EQ(expected, actual);
    }  
}