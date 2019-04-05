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
        if (!(c[EggProducing::getX()-1][EggProducing::getY()+1]->IsOccupied())){
            if (EggProducing::landType()==1){
                c[EggProducing::getX()-1][EggProducing::getY()]->SetOccupied(false);
            }
            this->EggProducing::setXY(EggProducing::getX(),EggProducing::getY()+1);
            if (EggProducing::landType()==1){
                c[EggProducing::getX()-1][EggProducing::getY()]->SetOccupied(true);
            }
        }
        //EggProducing::hungry -= 1;
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