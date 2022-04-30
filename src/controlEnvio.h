#ifndef CONTROLENVIO_H
#define CONTROLENVIO_H

#include "tipoEnvio.h"
#include <vector>

using namespace std;

class ControlEnvio {

    vector<TipoEnvio *> controlDeEnvios;

    public:
    ControlEnvio();
    ~ControlEnvio();

    void AgregarEnvio(TipoEnvio *envio);
    float ObtenerControl();

    virtual float CalculoEnvioTotal(int peso, int distancia, int clasePorKm);
};

#endif
