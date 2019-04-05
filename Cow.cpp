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

int Cow::moveRandom(Land* b[6][8], Land* g[6][8]){
    MilkProducing::setHungry(MilkProducing::getHungry()-1);
    if (MilkProducing::getHungry()%2==0){
        if ((MilkProducing::landType(MilkProducing::getX(),MilkProducing::getY())==3)){
            if ((MilkProducing::landType(MilkProducing::getX()+1,MilkProducing::getY())==3)){
                if (!(g[MilkProducing::getX()-4][MilkProducing::getY()-3]->IsOccupied())){
                    g[MilkProducing::getX()-5][MilkProducing::getY()-3]->SetOccupied(false);
                    this->MilkProducing::setXY(MilkProducing::getX()+1,MilkProducing::getY());
                    g[MilkProducing::getX()-5][MilkProducing::getY()-3]->SetOccupied(true);
                }
                return 1;
            }
        }
    } else{
        return 3;
    }
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