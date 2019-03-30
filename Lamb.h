#ifndef LAMB_H
#define LAMB_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Lamb : public MilkProducing, MeatProducing, Object{
    public :
        Lamb();
        ~Lamb();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
};

#endif