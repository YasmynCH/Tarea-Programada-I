#include <gtest/gtest.h>
#include "../src/envioTipo1.h"

namespace

    
{
    TEST(Test_EnvioTipo1_CalculoEnvioPrimeraClase, Test_PrimeraClasePorPeso)
    {
        /// AAA
        float actual= 0.0;
        // Arrange - configurar el escenario

        EnvioTipo1 envioPrimeraClase

        // Act - ejecute la operación

        actual = envioPrimeraClase.CalculoEnvioPrimeraClase(3, 1);
        float esperada = 0.300;

        // Assert - valide los resultados

        EXPECT_FLOAT_EQ(esperada, actual);
    }

}