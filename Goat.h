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
        int moveRandom(Land* b[6][8], Land* g[6][8]);
        void makeVoice();
        void eat();
        void gotInteracted();
        void print();
};

#endif