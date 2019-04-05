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
        void moveRandom(Land*, Land*);
        void makeVoice();
        void eat();
        void gotInteracted();
        void print();
};

#endif