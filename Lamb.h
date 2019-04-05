#ifndef LAMB_H
#define LAMB_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Lamb : public MilkProducing, public MeatProducing{
    public :
        Lamb();
        Lamb(int ,int );
        ~Lamb();
        void moveRandom(Cell*,Cell*);
        void makeVoice();
        void eat();
        void gotInteracted();
        void print();
};

#endif