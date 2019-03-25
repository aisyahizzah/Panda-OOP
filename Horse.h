#ifndef HORSE_H
#define HORSE_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Horse : public MilkProducing, MeatProducing{
    public :
        Horse();
        ~Horse();
        void makeVoice();
};

#endif
