#include "envioTipo1.h"

float EnvioTipo1::CalculoEnvioPrimeraClase(int peso, int clasePorKm)
{
    float resultado = 0.0;

    if (peso >= 0 || peso <= 3 || clasePorKm ==1)
    {
        resultado = 0.300;
    }
    else if (peso >= 4 || peso <= 8 || clasePorKm ==1)
    {
        resultado = 0.400;
    }
    else if (peso >= 9 || clasePorKm ==1)
    {
        resultado = 0.600;
    }

    return resultado;
}