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

void Chicken::moveRandom(Land* c[10][4], Land* g[6][8]){
    if (EggProducing::hungry%5==0){
        if (this->EggProducing::landType()==1){
            c[1][1]->SetOccupied(false);
        }
        this->EggProducing::setXY(EggProducing::getX(),EggProducing::getY()+1);
        if (this->EggProducing::landType()==1){
            c[1][2]->SetOccupied(true);
        }

    }
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