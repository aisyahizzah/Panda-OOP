#ifndef COW_H
#define COW_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

class Cow : public MilkProducing, MeatProducing{
    public :
        Cow();
        ~Cow();
        void makeVoice();
};

#endif