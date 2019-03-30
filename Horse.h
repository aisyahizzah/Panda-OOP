#ifndef HORSE_H
#define HORSE_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Horse : public MilkProducing, MeatProducing, Object{
    public :
        Horse();
        ~Horse();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
};

#endif
