
#ifndef UNIT_TEST

#include <iostream>
#include <vector>
#include "envio.h"
#include "fedex.h"
#include "servicioPostal.h"

using namespace std;

int main() 
{

    Fedex *fedex1 = new Fedex(1, 100);
    Fedex *fedex2 = new Fedex(5, 100);
    ServicioPostal *servicioPostal1 = new ServicioPostal(6, 300, 2);

    std::vector<Envio *> coleccionEnvios;
    coleccionEnvios.push_back(fedex1);
    coleccionEnvios.push_back(fedex2);
    coleccionEnvios.push_back(servicioPostal1);
    float totalMontoEnvios = 0;
    
    for (Envio *envio : coleccionEnvios)
    {
       totalMontoEnvios += envio->CalculoEnvio();
    }

    std:cout << "El monto total de los envios es de " << totalMontoEnvios << std::endl;
    
    delete fedex1;
    delete fedex2;
    delete servicioPostal1;

    return 0;
}

#endif