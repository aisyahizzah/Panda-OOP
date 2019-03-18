#IFNDEF COW_H
#DEFINE COW_H

#include "FarmAnimal.h"

class Cow : public MilkProducing, MeatProducing{
    public :
        Cow();
        ~Cow();
        void makeVoice();
}

#ENDIF