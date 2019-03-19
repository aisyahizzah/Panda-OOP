#ifndef CHICKEN_H
#define CHICKEN_H

#include "FarmAnimal.h"

class Chicken : public EggProducing, MeatProducing{
    public :
        Chicken();
        ~Chicken();
        void makeVoice();
};

#endif