#IFNDEF CHICKEN_H
#DEFINE CHICKEN_H

#include "FarmAnimal.h"

class Chicken : public EggProducing, MeatProducing{
    public :
        Chicken();
        ~Chicken();
        void makeVoice();
}

#ENDIF