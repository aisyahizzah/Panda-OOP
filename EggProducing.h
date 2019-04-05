#ifndef EGGPRODUCING_H
#define EGGPRODUCING_H

#include "FarmAnimal.h"
#include "Coop.h"

class EggProducing : public FarmAnimal,  public Object{
    private :
        bool produceEgg;
    public :
        EggProducing();
        virtual void moveRandom(Cell*,Cell*);
        virtual void makeVoice();
        virtual void print();
        void eat(Coop);
        void gotInteracted();
        bool getProduceEgg();
        void setProduceEgg(bool );
};

#endif