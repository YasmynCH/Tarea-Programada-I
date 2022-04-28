#ifndef TIPOENVIO_H
#define TIPOENVIO_H

using namespace std;

class TipoEnvio {


    int peso;
    int distancia;
    int clasePorKm;

    public:

    TipoEnvio();

    virtual ~TipoEnvio();
    
    virtual float CalculoEnvioTotal()= 0;
};

#endif 