#ifndef CHICKEN_H
#define CHICKEN_H

#include "FarmAnimal.h"
#include "EggProducing.h"
#include "MeatProducing.h"

class Chicken : public EggProducing, public MeatProducing, public Object{
    public :
        Chicken();
        Chicken(int ,int );
        ~Chicken();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
};

#endif