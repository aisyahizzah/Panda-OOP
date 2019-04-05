#ifndef HORSE_H
#define HORSE_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Horse : public MilkProducing, public MeatProducing{
    public :
        Horse();
        Horse(int ,int );
        ~Horse();
        int moveRandom(Land* b[6][8], Land* g[6][8]);
        void makeVoice();
        void eat();
        void gotInteracted();
        void print();
};

#endif
