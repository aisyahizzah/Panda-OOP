#ifndef LAMB_H
#define LAMB_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Lamb : public MilkProducing, MeatProducing{
    public :
        Lamb();
        ~Lamb();
        void makeVoice();
};

#endif