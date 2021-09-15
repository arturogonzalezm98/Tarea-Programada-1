#ifndef FEDEX_H
#define FEDEX_H

#include "envio.h"

class Fedex : public Envio {

    int peso;
    int distancia;

    public:
        Fedex(int, int);
        virtual float CalculoEnvio(); 
};

#endif