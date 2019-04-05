#include "MeatProducing.h"

MeatProducing::MeatProducing(){
    setHungry(10);
}
int MeatProducing::moveRandom(Land*,Land*){

}
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