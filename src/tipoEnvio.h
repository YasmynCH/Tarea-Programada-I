#ifndef TIPOENVIO_H
#define TIPOENVIO_H

using namespace std;

class TipoEnvio
{

    int peso;
    int distancia;
    int clasePorKm;

public:
    virtual ~TipoEnvio();
    virtual float CalculoEnvio() = 0;
};

#endif