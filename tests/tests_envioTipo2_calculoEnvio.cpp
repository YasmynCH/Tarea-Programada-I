#include <gtest/gtest.h>
#include "../src/envioTipo2.h"

namespace
{
    TEST(Test_EnvioTipo2_CalculoEnvioSegundaClase, Test_DistanciaMayor500)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioTipo2 envioTipo2;

        // Act - ejecute la operación
        int distancia= 600;
        int peso= 9;
        int clasePorKm=0;

        float costoActual = envioTipo2.CalculoEnvioTipo2(peso, distancia, clasePorKm);
        float costoEsperado = 50;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(costoEsperado, costoActual);
    }
}