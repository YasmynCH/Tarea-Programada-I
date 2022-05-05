#include <gtest/gtest.h>
#include "../src/envioTipo1.h"

using namespace std;

namespace
{
    TEST(Test_EnvioTipo1_CalculoEnvio1, Test_PrimeraClaseMayor0Menor3)
    {
        /// AAA

        // Arrange - configurar el escenario
        int clasePorKm = 1;
        int peso = 3;
        int distancia = 4;

        EnvioTipo1 envioTipo1(peso, distancia, clasePorKm);
        // Act - ejecute la operación

        float costoActual = envioTipo1.CalculoEnvio();
        float costoEsperado = 1.2;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

    TEST(Test_EnvioTipo1_CalculoEnvio2, Test_PrimeraClaseMayor4Menor8)
    {
        /// AAA

        // Arrange - configurar el escenario
        int clasePorKm = 1;
        int peso = 5;
        int distancia = 6;
        EnvioTipo1 envioTipo1(peso, distancia, clasePorKm);

        // Act - ejecute la operación

        float costoActual = envioTipo1.CalculoEnvio();
        float costoEsperado = 2.7;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

    TEST(Test_EnvioTipo1_CalculoEnvio3, Test_PrimeraClaseMayor9)
    {
        /// AAA

        // Arrange - configurar el escenario
        int clasePorKm = 1;
        int peso = 10;
        int distancia = 15;
        EnvioTipo1 envioTipo1(peso, distancia, clasePorKm);

        // Act - ejecute la operación

        float costoActual = envioTipo1.CalculoEnvio();
        float costoEsperado = 9;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }
    TEST(Test_EnvioTipo1_CalculoEnvio4, Test_PrimeraClaseMayor0Menor3)
    {
        /// AAA

        // Arrange - configurar el escenario

        int clasePorKm = 2;
        int peso = 3;
        int distancia = 3;
        EnvioTipo1 envioTipo1(peso, distancia, clasePorKm);

        // Act - ejecute la operación

        float costoActual = envioTipo1.CalculoEnvio();
        float costoEsperado = 0.084;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

    TEST(Test_EnvioTipo1_CalculoEnvio5, Test_PrimeraClaseMayor4Menor8)
    {
        /// AAA

        // Arrange - configurar el escenario
        int clasePorKm = 2;
        int peso = 5;
        int distancia = 9;
        EnvioTipo1 envioTipo1(peso, distancia, clasePorKm);

        // Act - ejecute la operación

        float costoActual = envioTipo1.CalculoEnvio();
        float costoEsperado = 0.477;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

    TEST(Test_EnvioTipo1_CalculoEnvio6, Test_PrimeraClaseMayor9)
    {
        /// AAA

        // Arrange - configurar el escenario
        int clasePorKm = 2;
        int peso = 10;
        int distancia = 6;

        EnvioTipo1 envioTipo1{peso, distancia, clasePorKm};

        // Act - ejecute la operación

        float costoActual = envioTipo1.CalculoEnvio();
        float costoEsperado = 0.45;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

    TEST(Test_EnvioTipo1_CalculoEnvio7, Test_PrimeraClaseMayor0Menor3)
    {
        /// AAA

        // Arrange - configurar el escenario

        int clasePorKm = 3;
        int peso = 3;
        int distancia = 7;
        EnvioTipo1 envioTipo1(peso, distancia, clasePorKm);

        // Act - ejecute la operación

        float costoActual = envioTipo1.CalculoEnvio();
        float costoEsperado = 0.084;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

    TEST(Test_EnvioTipo1_CalculoEnvio8, Test_PrimeraClaseMayor4Menor8)
    {
        /// AAA

        // Arrange - configurar el escenario
        int clasePorKm = 3;
        int peso = 5;
        int distancia = 15;
        EnvioTipo1 envioTipo1(peso, distancia, clasePorKm);

        // Act - ejecute la operación

        float costoActual = envioTipo1.CalculoEnvio();
        float costoEsperado = 0.18;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

    TEST(Test_EnvioTipo1_CalculoEnvio9, Test_PrimeraClaseMayor9)
    {
        /// AAA

        // Arrange - configurar el escenario

        int clasePorKm = 3;
        int peso = 10;
        int distancia = 25;
        EnvioTipo1 envioTipo1(peso, distancia, clasePorKm);

        // Act - ejecute la operación

        float costoActual = envioTipo1.CalculoEnvio();
        float costoEsperado = 0.3;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }

}