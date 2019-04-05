#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "Object.h"
#include "Land.h"

class FarmAnimal{
    protected :
        int hungry;
    public :
        ~FarmAnimal();
        virtual void moveRandom(Land*,Land*);
        virtual void makeVoice();
        virtual void eat();
        int getHungry();
        void setHungry(int);
        bool isHungry();
};

#endif