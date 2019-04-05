#ifndef DUCK_H
#define DUCK_H

#include "FarmAnimal.h"
#include "EggProducing.h"
#include "MeatProducing.h"

class Duck : public EggProducing, public MeatProducing{
    public :
        Duck();
        Duck(int ,int );
        ~Duck();
        void moveRandom(Cell*,Cell*);
        void makeVoice();
        void eat();
        void gotInteracted();
        void print();
};

#endif