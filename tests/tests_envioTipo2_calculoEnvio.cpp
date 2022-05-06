#include <gtest/gtest.h>
#include "../src/envioTipo2.h"

using namespace std;

namespace
{
    TEST(Test_EnvioTipo2_CalculoEnvio, Test_DistanciaMayor500)
    {
        /// AAA

        // Arrange - configurar el escenario

        int distancia = 600;
        int peso = 9;

        EnvioTipo2 envioTipo2(peso, distancia);

        // Act - ejecute la operación

        float costoActual = envioTipo2.CalculoEnvio();
        float costoEsperado = 50;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

    TEST(Test_EnvioTipo2_CalculoEnvioSegundaClase, Test_PesoMayor10)
    {
        /// AAA

        // Arrange - configurar el escenario
        int distancia = 400;
        int peso = 11;

        EnvioTipo2 envioTipo2(peso, distancia);

        // Act - ejecute la operación

        float costoActual = envioTipo2.CalculoEnvio();
        float costoEsperado = 45;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

    TEST(Test_EnvioTipo2_CalculoEnvioSClase, Test_DistanciaMayor500PesoMayor10)
    {
        /// AAA

        // Arrange - configurar el escenario
        int distancia = 900;
        int peso = 15;

        EnvioTipo2 envioTipo2(peso, distancia);

        // Act - ejecute la operación

        float costoActual = envioTipo2.CalculoEnvio();
        float costoEsperado = 60;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }
}