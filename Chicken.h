#ifndef CHICKEN_H
#define CHICKEN_H

#include "FarmAnimal.h"
#include "EggProducing.h"
#include "MeatProducing.h"

class Chicken : public EggProducing, public MeatProducing{
    public :
        Chicken();
        Chicken(int ,int );
        ~Chicken();
        int moveRandom(Land* c[10][4], Land* g[6][8]);
        void makeVoice();
        void eat();
        void gotInteracted();
        void print();
};

#endif