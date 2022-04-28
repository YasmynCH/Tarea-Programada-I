#include "tipoEnvio.h"
#include "envioTipo1.h"
#include "envioTipo2.h"
#include "controlEnvio.h"
#include <iostream>

using namespace std;

int main() {

    ControlEnvio *controlEnvio = new ControlEnvio();    

    EnvioTipo1* envioTipo1PrimeraClase = new EnvioTipo1(2, 1, 0);
    controlEnvio->AgregarEnvio(envioTipo1PrimeraClase);

    EnvioTipo2* envioTipo2PrimerCaso = new EnvioTipo2(8, 600, 0);

    float total = controlEnvio->ObtenerControl();

    cout << "Total de envios realizados: " << total << endl;

    delete controlEnvio;

}