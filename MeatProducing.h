#ifndef MEATPRODUCING_H
#define MEATPRODUCING_H

#include "FarmAnimal.h"
#include "Barn.h"

class MeatProducing : public FarmAnimal, public Object{
    public :
        MeatProducing();
        virtual void moveRandom(Land*,Land*);
        virtual void makeVoice();
        virtual void print();
        void eat(Barn);
        void gotKilled();
};

#endif