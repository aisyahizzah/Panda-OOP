#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "Object.h"

class FarmAnimal{
    private :
        int hungry;
    public :
        ~FarmAnimal();
        virtual void moveRandom(); /*player gerak dulu lalu hewan, posisi hewan bergerak tidak boleh sama dengan player*/
        virtual void makeVoice();
        virtual void eat();
        int getHungry();
        void setHungry(int);
};

#endif