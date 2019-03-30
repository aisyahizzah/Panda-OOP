#ifndef GOAT_H
#define GOAT_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Goat : public MilkProducing, public MeatProducing, public Object{
    public :
        Goat();
        ~Goat();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
};

#endif