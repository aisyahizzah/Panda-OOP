#include "MilkProducing.h"

MilkProducing::MilkProducing(){
    setHungry(5);
    produceMilk = false;
}

void MilkProducing::moveRandom(){}
void MilkProducing::makeVoice(){}

void MilkProducing::eat(Grassland g){
    if (g.IsRumputExist()){
        g.SetRumput(false);
        setHungry(5);
        setProduceMilk(true);
    }
}

Produk MilkProducing::getProduct(){
    return Produk(1000);
}

bool MilkProducing::getProduceMilk(){
    return produceMilk;
}
void MilkProducing::setProduceMilk(bool b){
    produceMilk = b;
}
