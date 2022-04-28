#include "envioTipo2.h"

using namespace std;


EnvioTipo2::EnvioTipo2(){

    
}

EnvioTipo2::EnvioTipo2(int peso, int distancia, int clasePorKm){

    this->costoBase;
    this->distancia = distancia;
    this->peso = peso;
}

float EnvioTipo2::CalculoEnvioTipo2(int peso, int distancia, int clasePorK){


    if (peso >= 10){
        costoBase = costoBase + 10.00;
    }
    
    if (distancia >= 500){
        costoBase = costoBase + 15.00;
    }
    
    return costoBase;
}

