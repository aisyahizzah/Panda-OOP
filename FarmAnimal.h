#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "Object.h"
#include "Cell.h"

class FarmAnimal{
    protected :
        int hungry;
    public :
        ~FarmAnimal();
        virtual void moveRandom(Cell*,Cell*); /*player gerak dulu lalu hewan, posisi hewan bergerak tidak boleh sama dengan player*/
        virtual void makeVoice();
        virtual void eat();
        int getHungry();
        void setHungry(int);
        bool isHungry();
};

#endif