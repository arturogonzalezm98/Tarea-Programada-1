#include "servicioPostal.h"

ServicioPostal::ServicioPostal(int pesoKG, int distanciaKM, int claseAsiento)
{
    this->peso = pesoKG;
    this->distancia = distanciaKM;
    this->clase = claseAsiento;
}

float ServicioPostal::CalculoEnvio() 
{
    float costo;
    if((1 <= this->peso) && (3 >= this->peso))
    {
        switch (this->clase)
        {
            case 1:
                costo = this->distancia * 0.195;
            break;

            case 2:
                costo = this->distancia * 0.0195;
            break;

            case 3:
                costo = this->distancia * 0.0150;
            break;
        }
    }
    
    if((this->peso >= 4) && (this->peso <= 8))
    {
        switch (clase)
        {
        case 1:
            costo = this->distancia * 0.450;    
        break;
        
        case 2:
            costo = this->distancia * 0.0450;    
        break;

        case 3:
            costo = this->distancia * 0.0160;    
        break;
        }
    }

    if(this->peso >= 9)
    {
        switch (this->clase)
        {
        case 1:
            costo = this->distancia * 0.500;
        break;
        
        case 2:
            costo = this->distancia * 0.0500;
        break;

        case 3:
            costo = this->distancia * 0.0170;
        break;
        }
    }
    return costo;
}