#include "MilkProducing.h"

MilkProducing::MilkProducing(){
    setHungry(10);
    produceMilk = false;
}

int MilkProducing::moveRandom(Land*,Land*){}
void MilkProducing::makeVoice(){}
void MilkProducing::print(){}

void MilkProducing::eat(Land* g(*)[8]){
    if (g.IsRumputExist()){
        g.SetRumput(false);
        setHungry(11);
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
