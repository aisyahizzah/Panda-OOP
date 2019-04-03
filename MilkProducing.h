#ifndef MILKPRODUCING_H
#define MILKPRODUCING_H

#include "FarmAnimal.h"
#include "Grassland.h"

class MilkProducing : public FarmAnimal{
    private :
        bool produceMilk;
    public :
        MilkProducing();
        virtual void moveRandom();
        virtual void makeVoice();
        void eat(Grassland);
        void gotInteracted();
        bool getProduceMilk();
        void setProduceMilk(bool );
};

#endif