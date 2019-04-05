#include "MilkProducing.h"

MilkProducing::MilkProducing(){
    setHungry(10);
    produceMilk = false;
}

void MilkProducing::moveRandom(Land*,Land*){}
void MilkProducing::makeVoice(){}
void MilkProducing::print(){}

void MilkProducing::eat(Grassland g){
    if (g.IsRumputExist()){
        g.SetRumput(false);
        setHungry(10);
        setProduceMilk(true);
    }
}

Produk MilkProducing::getProduct(){
    Produk *pro;
    return *pro/*Produk(1000)*/;
}

bool MilkProducing::getProduceMilk(){
    return produceMilk;
}
void MilkProducing::setProduceMilk(bool b){
    produceMilk = b;
}
