#ifndef MILKPRODUCING_H
#define MILKPRODUCING_H

#include "FarmAnimal.h"
#include "Grassland.h"
#include "Produk.h"

class MilkProducing : public FarmAnimal{
    private :
        bool produceMilk;
    public :
        MilkProducing();
        virtual void moveRandom();
        virtual void makeVoice();
        void eat(Grassland);
        Produk getProduct();
        bool getProduceMilk();
        void setProduceMilk(bool);
};

#endif