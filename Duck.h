#ifndef DUCK_H
#define DUCK_H

#include "FarmAnimal.h"
#include "EggProducing.h"
#include "MeatProducing.h"

class Duck : public EggProducing, MeatProducing {
    public :
        Duck();
        ~Duck();
        void makeVoice();
};

#endif