#include "MeatProducing.h"

MeatProducing::MeatProducing(){
    setHungry(10);
}
void MeatProducing::moveRandom(){}
void MeatProducing::makeVoice(){}
void MeatProducing::print(){}

void MeatProducing::eat(Barn b){
    if (b.IsRumputExist()){
        b.SetRumput(false);
        setHungry(10);
    }
}
void MeatProducing::gotKilled(){
    
}