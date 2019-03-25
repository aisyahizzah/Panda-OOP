#ifndef GOAT_H
#define GOAT_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Goat : public MilkProducing, MeatProducing{
    public :
        Goat();
        ~Goat();
        void makeVoice();
};

#endif