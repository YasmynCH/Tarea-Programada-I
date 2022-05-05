#include "envioTipo1.h"

using namespace std;


EnvioTipo1::EnvioTipo1(int peso, int distancia, int clasePorKm){

    this->peso = peso;
    this->distancia = distancia;
    this->clasePorKm = clasePorKm;
}

float EnvioTipo1::CalculoEnvio(){

    float resultado = 0.0;

    switch (clasePorKm){

    case 1:
        if (peso <= 3)
        {
            resultado = 0.300;
        }
        else if (peso <= 8)
        {
            resultado = 0.450;
        }
        else if (peso >= 9)
        {
            resultado = 0.600;
        }
        break;

    case 2:

        if (peso <= 3)
        {
            resultado = 0.0280;
        }
        else if (peso <= 8)
        {
            resultado = 0.0530;
        }
        else if (peso >= 9)
        {
            resultado = 0.0750;
        }
        break;

    case 3:

        resultado = 0.0120;

        break;

    default:

        resultado = 0;
    }

    return resultado * distancia;
}

