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
int Goat::moveRandom(Land* b[6][8], Land* g[6][8]){
    MilkProducing::setHungry(MilkProducing::getHungry()-1);
    if (MilkProducing::getHungry()%2==1){
        if ((MilkProducing::landType(MilkProducing::getX(),MilkProducing::getY())==3)){
            if ((MilkProducing::landType(MilkProducing::getX(),MilkProducing::getY()+1)==3)){
                if (!(g[MilkProducing::getX()-5][MilkProducing::getY()-2]->IsOccupied())){
                    g[MilkProducing::getX()-5][MilkProducing::getY()-3]->SetOccupied(false);
                    this->MilkProducing::setXY(MilkProducing::getX(),MilkProducing::getY()+1);
                    g[MilkProducing::getX()-5][MilkProducing::getY()-3]->SetOccupied(true);
                }
                return 1;
            }
        }
    } else{
        return 3;
    }
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