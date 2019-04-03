#ifndef EGGPRODUCING_H
#define EGGPRODUCING_H

#include "FarmAnimal.h"
#include "Coop.h"

class EggProducing : public FarmAnimal{
    private :
        bool produceEgg;
    public :
        EggProducing();
        virtual void moveRandom();
        virtual void makeVoice();
        void eat(Coop);
        void gotInteracted();
        bool getProduceEgg();
        void setProduceEgg(bool );
};

#endif