#include "EggProducing.h"

EggProducing::EggProducing(){
    setHungry(10);
    produceEgg = false;
}

int EggProducing::moveRandom(Land*, Land*){}
void EggProducing::makeVoice(){}
void EggProducing::print(){}

void EggProducing::eat(Coop c){
    if (c.IsRumputExist()){
        c.SetRumput(false);
        setHungry(10);
        setProduceEgg(true);
    }
}
void EggProducing::gotInteracted(){
    setProduceEgg(false);
}

bool EggProducing::getProduceEgg(){
    return produceEgg;
}
void EggProducing::setProduceEgg(bool b){
    produceEgg = b;
}