#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "Object.h"

class FarmAnimal : public Object{
    private :
        int hungry;
    public :
        ~FarmAnimal();
        void moveRandom();
        void makeVoice();
        void eat();
        int getHungry();
        void setHungry(int);
};

#endif