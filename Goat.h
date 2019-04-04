#ifndef GOAT_H
#define GOAT_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Goat : public MilkProducing, public MeatProducing{
    public :
        Goat();
        Goat(int ,int );
        ~Goat();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
        void print();
};

#endif