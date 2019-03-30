#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "Object.h"

class FarmAnimal{
    private :
        int hungry;
    public :
        ~FarmAnimal();
        virtual void moveRandom()=0; /*player gerak dulu lalu hewan, posisi hewan bergerak tidak boleh sama dengan player*/
        virtual void makeVoice()=0;
        virtual void eat()=0;
        int getHungry();
        void setHungry(int);
};

#endif