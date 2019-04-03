#ifndef MEATPRODUCING_H
#define MEATPRODUCING_H

#include "FarmAnimal.h"
#include "Barn.h"

class MeatProducing : public FarmAnimal{
    public :
        MeatProducing();
        virtual void moveRandom();
        virtual void makeVoice();
        void eat(Barn);
        void gotKilled();
};

#endif