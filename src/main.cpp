#include "envioTipo1.h"
#include "envioTipo2.h"
#include "tipoEnvio.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<TipoEnvio *> controlDeEnvios;

    int peso = 3;
    int distancia = 5;
    int clasePorKm = 1;

    EnvioTipo1 *envio1 = new EnvioTipo1(peso, distancia, clasePorKm);
    controlDeEnvios.push_back(envio1);

    int peso2 = 600;
    int distancia2 = 15;
    int clasePorKm2 = 3;

    EnvioTipo1 *envio3 = new EnvioTipo1(peso2, distancia2, clasePorKm2);
    controlDeEnvios.push_back(envio3);

    int peso1 = 8;
    int distancia1 = 300;

    EnvioTipo2 *envio2 = new EnvioTipo2(peso1, distancia1);
    controlDeEnvios.push_back(envio2);

    int peso3 = 10;
    int distancia3 = 600;

    EnvioTipo2 *envio4 = new EnvioTipo2(peso3, distancia3);
    controlDeEnvios.push_back(envio4);

    float resultado = 0;

    for (TipoEnvio *envio : controlDeEnvios)
    {

        resultado += envio->CalculoEnvio();
    }

    std::cout << "El monto total de los envios es de " << resultado << std::endl;

    delete envio4;
    delete envio3;
    delete envio2;
    delete envio1;
}