#include "FarmAnimal.h"

FarmAnimal::~FarmAnimal(){

}

void FarmAnimal::moveRandom(Cell*,Cell*){}
void FarmAnimal::makeVoice(){}
void FarmAnimal::eat(){}

int FarmAnimal::getHungry(){
    return hungry;
}
void FarmAnimal::setHungry(int h){
    hungry = h;
}
bool FarmAnimal::isHungry(){
    return (hungry<=5);
}