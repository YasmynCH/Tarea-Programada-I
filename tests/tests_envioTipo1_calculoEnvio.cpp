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
    
    TEST(Test_EnvioTipo1_CalculoEnvioSegundaClase, Test_PrimeraClaseMayor0Menor3)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioTipo1 envioTipo1;

        // Act - ejecute la operación
        int clasePorKm= 2;
        int peso= 3;
        int distancia= 3;

        float costoActual = envioTipo1.CalculoEnvioTipo1(peso, distancia, clasePorKm);
        float costoEsperado = 0.084;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }


    TEST(Test_EnvioTipo1_CalculoEnvioSegundaClase, Test_PrimeraClaseMayor4Menor8)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioTipo1 envioTipo1;

        // Act - ejecute la operación
        int clasePorKm= 2;
        int peso= 5;
        int distancia=9;

        float costoActual = envioTipo1.CalculoEnvioTipo1(peso, distancia, clasePorKm);
        float costoEsperado = 0.477;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }


    TEST(Test_EnvioTipo1_CalculoEnvioSegundaClase, Test_PrimeraClaseMayor9)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioTipo1 envioTipo1;

        // Act - ejecute la operación
        int clasePorKm= 2;
        int peso= 10;
        int distancia= 6;

        float costoActual = envioTipo1.CalculoEnvioTipo1(peso, distancia, clasePorKm);
        float costoEsperado = 0.45;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

        TEST(Test_EnvioTipo1_CalculoEnvioTerceraClase, Test_PrimeraClaseMayor0Menor3)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioTipo1 envioTipo1;

        // Act - ejecute la operación
        int clasePorKm= 3;
        int peso= 3;
        int distancia= 7;

        float costoActual = envioTipo1.CalculoEnvioTipo1(peso, distancia, clasePorKm);
        float costoEsperado = 0.084;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }


    TEST(Test_EnvioTipo1_CalculoEnvioTerceraClase, Test_PrimeraClaseMayor4Menor8)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioTipo1 envioTipo1;

        // Act - ejecute la operación
        int clasePorKm= 3;
        int peso= 5;
        int distancia=15;

        float costoActual = envioTipo1.CalculoEnvioTipo1(peso, distancia, clasePorKm);
        float costoEsperado = 0.18;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }


    TEST(Test_EnvioTipo1_CalculoEnvioTerceraClase, Test_PrimeraClaseMayor9)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioTipo1 envioTipo1;

        // Act - ejecute la operación
        int clasePorKm= 3;
        int peso= 10;
        int distancia= 25;

        float costoActual = envioTipo1.CalculoEnvioTipo1(peso, distancia, clasePorKm);
        float costoEsperado = 0.3;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

}