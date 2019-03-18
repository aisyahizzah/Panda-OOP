#IFNDEF DUCK_H
#DEFINE DUCK_H

#include "FarmAnimal.h"

class Duck : public EggProducing, MeatProducing {
    public :
        Duck();
        ~Duck();
        void makeVoice();
}

#ENDIF