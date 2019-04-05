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
        void moveRandom(Cell*,Cell*);
        void makeVoice();
        void eat();
        void gotInteracted();
        void print();
};

#endif
