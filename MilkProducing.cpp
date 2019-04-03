#include "MilkProducing.h"
#include "Susu.h"

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
void MilkProducing::gotInteracted(){
    setProduceMilk(false);
}

Product MilkProducing::getProduct(){
    susu;
    return susu;
}
void MilkProducing::setProduceMilk(bool b){
    produceMilk = b;
}
