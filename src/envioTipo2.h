#ifndef ENVIOTIPO2_H
#define ENVIOTIPO2_H

#include "tipoEnvio.h"

using namespace std;

class EnvioTipo2 : public TipoEnvio {

    float costoBase = 35.00;
    int peso;
    int distancia; 
    int clasePorKm;

    public:

    
    EnvioTipo2(int peso, int distancia, int clasePorKm);

    virtual float CalculoEnvio();

};



#endif
