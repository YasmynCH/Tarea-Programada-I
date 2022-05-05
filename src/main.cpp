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

    int peso1 = 10;
    int distancia1 = 600;
    int clasePorKm1 = 0;

    EnvioTipo2 *envio2 = new EnvioTipo2(peso1,  distancia1, clasePorKm1);
    controlDeEnvios.push_back(envio2);

    float resultado = 0;

    for (TipoEnvio *envio : controlDeEnvios)
    {

        resultado += envio->CalculoEnvio();
                     
    }

    std::cout << "El monto total de los envios es de " <<resultado<< std::endl;


    delete envio1;
    delete envio2;
}