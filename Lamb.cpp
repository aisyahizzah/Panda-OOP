#include "Lamb.h"
#include <iostream>
using namespace std;
Lamb::Lamb(){
    
}

Lamb::Lamb(int x,int y){
    MeatProducing::setXY(x,y);
}

Lamb::~Lamb(){
    
}
int Lamb::moveRandom(Land* b[6][8], Land* g[6][8]){
    MeatProducing::setHungry(MeatProducing::getHungry()-1);
    if (MeatProducing::getHungry()%2==1){
        if ((MeatProducing::landType(MeatProducing::getX(),MeatProducing::getY())==2)){
            if ((MeatProducing::landType(MeatProducing::getX(),MeatProducing::getY()+1)==2)){
                if (!(b[MeatProducing::getX()][MeatProducing::getY()-2]->IsOccupied())){
                    b[MeatProducing::getX()][MeatProducing::getY()-3]->SetOccupied(false);
                    this->MeatProducing::setXY(MeatProducing::getX(),MeatProducing::getY()+1);
                    b[MeatProducing::getX()][MeatProducing::getY()-3]->SetOccupied(true);
                }
                return 1;
            }
        }
    } else{
        return 3;
    }
}
        
void Lamb::makeVoice(){
    cout << "Lamb" << endl;
}

void Lamb::eat(){

}

void Lamb::gotInteracted(){

}

void Lamb::print(){
    if (MeatProducing::isHungry()){
        cout << "| L!";
    } else{
        cout << "| L ";
    }
}