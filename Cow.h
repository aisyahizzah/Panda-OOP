#ifndef COW_H
#define COW_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Cow : public MilkProducing, public MeatProducing, public Object{
    public :
        Cow();
        Cow(int ,int );
        ~Cow();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
};

#endif