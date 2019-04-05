#include "Cow.h"
#include <iostream>
using namespace std;
Cow::Cow(){
    
}

Cow::Cow(int x,int y){
    MilkProducing::setXY(x,y);
}

Cow::~Cow(){
    
}

void Cow::moveRandom(Cell*,Cell*){

}

void Cow::makeVoice(){
    cout << "Cow" << endl;
}

void Cow::eat(){

}

void Cow::gotInteracted(){

}

void Cow::print(){
    if (MilkProducing::isHungry()){
        cout << "| S!";
    } else{
        cout << "| S ";
    }
}