#include "fedex.h"

Fedex::Fedex(int pesoKG, int distanciaKM)
{
    this->peso = pesoKG;
    this->distancia = distanciaKM;
}

float Fedex::CalculoEnvio() 
{
    int costoInicial = 20;
    if(this-> distancia > 500)
    {
        costoInicial += 5;
    }
    if(this-> peso > 4)
    {
        costoInicial += 3;
    }
    return costoInicial;
}