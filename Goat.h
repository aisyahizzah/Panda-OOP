#IFNDEF GOAT_H
#DEFINE GOAT_H

#include "FarmAnimal.h"

class Goat : public MilkProducing, MeatProducing{
    public :
        Goat();
        ~Goat();
        void makeVoice();
}

#ENDIF