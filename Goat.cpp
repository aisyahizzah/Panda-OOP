#include "Goat.h"
#include <iostream>
using namespace std;
Goat::Goat(){
    
}

Goat::Goat(int x,int y){
    MilkProducing::setXY(x,y);
}

Goat::~Goat(){
    
}
int Goat::moveRandom(Land*, Land*){

}
        
void Goat::makeVoice(){
    cout << "Goat" << endl;
}

void Goat::eat(){

}

void Goat::gotInteracted(){

}

void Goat::print(){
    if (MilkProducing::isHungry()){
        cout << "| G!";
    } else{
        cout << "| G ";
    }
}