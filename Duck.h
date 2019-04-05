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
        int moveRandom(Land* c[10][4], Land* b[6][8]);
        void makeVoice();
        void eat();
        void gotInteracted();
        void print();
};

#endif