#include "EggProducing.h"

EggProducing::EggProducing(){
    setXY(0,0);
    setHungry(5);
    produceEgg = false;
}

void EggProducing::moveRandom(){

}
void EggProducing::makeVoice(){

}
void EggProducing::eat(Coop c){
    if (c.IsRumputExist()){
        c.SetRumput(false);
        setHungry(5);
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