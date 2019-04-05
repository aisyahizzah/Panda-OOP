#include "Horse.h"
#include <iostream>
using namespace std;
Horse::Horse(){
    
}

Horse::Horse(int x,int y){
    MeatProducing::setXY(x,y);
}

Horse::~Horse(){
    
}
int Horse::moveRandom(Land* b[6][8], Land* g[6][8]){
    MeatProducing::setHungry(MeatProducing::getHungry()-1);
    if (MeatProducing::getHungry()%2==0){
        if ((MeatProducing::landType(MeatProducing::getX(),MeatProducing::getY())==2)){
            if ((MeatProducing::landType(MeatProducing::getX()+1,MeatProducing::getY())==2)){
                if (!(b[MeatProducing::getX()+1][MeatProducing::getY()-3]->IsOccupied())){
                    cout << "masuk";
                    b[MeatProducing::getX()][MeatProducing::getY()-3]->SetOccupied(false);
                    this->MeatProducing::setXY(MeatProducing::getX()+1,MeatProducing::getY());
                    b[MeatProducing::getX()][MeatProducing::getY()-3]->SetOccupied(true);
                }
                return 1;
            }
        }
    } else{
        return 3;
    }
}
        
void Horse::makeVoice(){
    cout << "Horse" << endl;
}

void Horse::eat(){

}

void Horse::gotInteracted(){

}

void Horse::print(){
    if (MeatProducing::isHungry()){
        cout << "| H!";
    } else{
        cout << "| H ";
    }
}