#ifndef COW_H
#define COW_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Cow : public MilkProducing, public MeatProducing{
    public :
        Cow();
        Cow(int ,int );
        ~Cow();
        int moveRandom(Land* b[6][8], Land* g[6][8]);
        void makeVoice();
        void eat();
        void gotInteracted();
        void print();
};

#endif