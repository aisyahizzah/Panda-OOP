#include "MeatProducing.h"

MeatProducing::MeatProducing(){
    setXY(0,0);
    setHungry(5);
}
void MeatProducing::moveRandom(){

}
void MeatProducing::makeVoice(){

}
void MeatProducing::eat(Barn b){
    if (b->IsRumputExist()){
        b->SetRumput(false);
        setHungry(5);
    }
}
void MeatProducing::gotKilled(){
    
}