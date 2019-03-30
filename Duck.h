#ifndef DUCK_H
#define DUCK_H

#include "FarmAnimal.h"
#include "EggProducing.h"
#include "MeatProducing.h"

class Duck : public EggProducing, public MeatProducing, public Object{
    public :
        Duck();
        ~Duck();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
};

#endif