#IFNDEF LAMB_H
#DEFINE LAMB_H

#include "FarmAnimal.h"

class Lamb : public MilkProducing, MeatProducing{
    public :
        Lamb();
        ~Lamb();
        void makeVoice();
}

#ENDIF