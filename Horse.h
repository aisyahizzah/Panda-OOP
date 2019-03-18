#IFNDEF HORSE_H
#DEFINE HORSE_H

#include "FarmAnimal.h"

class Horse : public MilkProducing, MeatProducing{
    public :
        Horse();
        ~Horse();
        void makeVoice();
}

#ENDIF
