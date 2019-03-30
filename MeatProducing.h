#ifndef MEATPRODUCING_H
#define MEATPRODUCING_H

#include "FarmAnimal.h"
#include "Barn.h"

class MeatProducing : public FarmAnimal{
    public :
        MeatProducing();
        virtual void moveRandom()=0;
        virtual void makeVoice()=0;
        void eat(Barn);
        void gotKilled();
};

#endif