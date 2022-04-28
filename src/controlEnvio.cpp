#include "controlEnvio.h"

ControlEnvio::ControlEnvio() {

} 

ControlEnvio::~ControlEnvio() {

    for (TipoEnvio* envio : this->controlDeEnvios)
    {
        delete envio;
    }

    this->controlDeEnvios.clear();
}

void ControlEnvio::AgregarEnvio(TipoEnvio *envio) {
    this->controlDeEnvios.push_back(envio);
}

float ControlEnvio::ObtenerControl() {
    float resultado = 0;
    int peso;
    int distancia;
    int clasePorKm;

    for (TipoEnvio* envio : this->controlDeEnvios)
    {
        resultado += envio-> CalculoEnvio(peso, distancia, clasePorKm);
    }

    return resultado;
}