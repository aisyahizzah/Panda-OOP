#ifndef MILKPRODUCING_H
#define MILKPRODUCING_H

#include "FarmAnimal.h"
#include "Grassland.h"
#include "Produk.h"

class MilkProducing : public FarmAnimal, public Object{
    private :
        bool produceMilk;
    public :
        MilkProducing();
        virtual void moveRandom();
        virtual void makeVoice();
        virtual void print();
        void eat(Grassland);
        Produk getProduct();
        bool getProduceMilk();
        void setProduceMilk(bool);
};

#endif