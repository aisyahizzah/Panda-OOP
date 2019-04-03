#include "MeatProducing.h"

MeatProducing::MeatProducing(){
    setHungry(5);
}
void MeatProducing::moveRandom(){}
void MeatProducing::makeVoice(){}

void MeatProducing::eat(Barn b){
    if (b.IsRumputExist()){
        b.SetRumput(false);
        setHungry(5);
    }
}
void MeatProducing::gotKilled(){
    
}