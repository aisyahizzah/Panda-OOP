#ifndef CHICKEN_H
#define CHICKEN_H

#include "FarmAnimal.h"
#include "EggProducing.h"
#include "MeatProducing.h"

class Chicken : public EggProducing, MeatProducing{
    public :
        Chicken();
        ~Chicken();
        void makeVoice();
};

#endif