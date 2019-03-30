#ifndef MILKPRODUCING_H
#define MILKPRODUCING_H

#include "FarmAnimal.h"
#include "Grassland.h"

class MilkProducing : public FarmAnimal{
    private :
        bool produceMilk;
    public :
        MilkProducing();
        virtual void moveRandom()=0;
        virtual void makeVoice()=0;
        void eat(Grassland);
        void gotInteracted();
        bool getProduceMilk();
        void setProduceMilk(bool );
};

#endif