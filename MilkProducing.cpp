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
void MilkProducing::gotInteracted(){
    setProduceMilk(false);
}

bool MilkProducing::getProduceMilk(){
    return produceMilk;
}
void MilkProducing::setProduceMilk(bool b){
    produceMilk = b;
}