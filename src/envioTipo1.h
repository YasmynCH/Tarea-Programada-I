#ifndef ENVIOTIPO1_H
#define ENVIOTIPO1_H

#include "tipoEnvio.h"

using namespace std;

class EnvioTipo1 {


    private:

    int peso;
    int clasePorKm;
    int distancia;
    
    public:

    EnvioTipo1();
    EnvioTipo1(int peso, int distancia, int clasePorKm);
    float CalculoEnvioTotal(int peso, int distancia, int clasePorK);

    

};



#endif

