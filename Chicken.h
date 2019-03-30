#ifndef CHICKEN_H
#define CHICKEN_H

#include "FarmAnimal.h"
#include "EggProducing.h"
#include "MeatProducing.h"

class Chicken : public EggProducing, MeatProducing, Object{
    public :
        Chicken();
        ~Chicken();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
};

#endif