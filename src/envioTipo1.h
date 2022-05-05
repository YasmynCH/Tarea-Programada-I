#ifndef ENVIOTIPO1_H
#define ENVIOTIPO1_H

#include "tipoEnvio.h"

using namespace std;

class EnvioTipo1 : public TipoEnvio{


    private:

    int peso;
    int clasePorKm;
    int distancia;
    
    public:


    EnvioTipo1(int peso, int distancia, int clasePorKm);
    virtual float CalculoEnvio();

    

};

#endif

