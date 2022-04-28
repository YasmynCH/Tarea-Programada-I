#include <gtest/gtest.h>
#include "../src/envioTipo1.h"

namespace
{
    TEST(Test_EnvioTipo1_CalculoEnvio, Test_PrimeraClaseMayor0Menor3)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioTipo1 envioTipo1;
        // Act - ejecute la operación
        int clasePorKm= 1;
        int peso= 3;
        int distancia= 4;

        float costoActual = envioTipo1.CalculoEnvioTipo1(peso, distancia, clasePorKm);
        float costoEsperado = 1.2;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

TEST(Test_EnvioTipo1_CalculoEnvioPrimeraClase, Test_PrimeraClaseMayor4Menor8)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioTipo1 envioTipo1;

        // Act - ejecute la operación
        int clasePorKm= 1;
        int peso= 5;
        int distancia= 6;

        float costoActual = envioTipo1.CalculoEnvioTipo1(peso, distancia, clasePorKm);
        float costoEsperado = 2.7;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }


    TEST(Test_EnvioTipo1_CalculoEnvioPrimeraClase, Test_PrimeraClaseMayor9)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioTipo1 envioTipo1;

        // Act - ejecute la operación
        int clasePorKm= 1;
        int peso= 10;
        int distancia=15;

        float costoActual = envioTipo1.CalculoEnvioTipo1(peso, distancia, clasePorKm);
        float costoEsperado = 9;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }
    

}