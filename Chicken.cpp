#include "Chicken.h"
#include <iostream>

using namespace std;
Chicken::Chicken(){
    
}

Chicken::Chicken(int x,int y){
    EggProducing::setXY(x,y);
}

Chicken::~Chicken(){
    
}

void Chicken::moveRandom(Cell* b[6][8], Cell* g[6][8]){

}
        
void Chicken::makeVoice(){
    cout << "Kukuruyuk" << endl;
}

void Chicken::eat(){

}

void Chicken::gotInteracted(){

}

void Chicken::print(){
    if (EggProducing::isHungry()){
        cout << "| C!";
    } else{
        cout << "| C ";
    }
}