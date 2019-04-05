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

int Chicken::moveRandom(Land* c[10][4], Land* b[6][8]){
    if (EggProducing::hungry%5==0){
        if ((EggProducing::landType(EggProducing::getX(),EggProducing::getY()+1)==1)){
            if (!(c[EggProducing::getX()-1][EggProducing::getY()+1]->IsOccupied())){
                c[EggProducing::getX()-1][EggProducing::getY()]->SetOccupied(false);
                this->EggProducing::setXY(EggProducing::getX(),EggProducing::getY()+1);
                c[EggProducing::getX()-1][EggProducing::getY()]->SetOccupied(true);
            }
            return 1;
        } else if ((EggProducing::landType(EggProducing::getX(),EggProducing::getY()+1)==2)){
            return 2;
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