#include "Duck.h"
#include <iostream>
using namespace std;
Duck::Duck(){
    
}

Duck::Duck(int x,int y){
    EggProducing::setXY(x,y);
}

Duck::~Duck(){
    
}

int Duck::moveRandom(Land* c[10][4], Land* b[6][8]){
    EggProducing::setHungry(EggProducing::getHungry()-1);
    if (EggProducing::getHungry()%2==1){
        if ((EggProducing::landType(EggProducing::getX(),EggProducing::getY())==1)){
            if ((EggProducing::landType(EggProducing::getX()+1,EggProducing::getY())==1)){
                if (!(c[EggProducing::getX()][EggProducing::getY()]->IsOccupied())){
                    c[EggProducing::getX()-1][EggProducing::getY()]->SetOccupied(false);
                    this->EggProducing::setXY(EggProducing::getX()+1,EggProducing::getY());
                    c[EggProducing::getX()-1][EggProducing::getY()]->SetOccupied(true);
                }
                return 1;
            }
        }
    } else{
        return 3;
    }
}
        
void Duck::makeVoice(){
    cout << "Duck" << endl;
}

void Duck::eat(){

}

void Duck::gotInteracted(){

}
void Duck::print(){
    if (EggProducing::isHungry()){
        cout << "| D!";
    } else{
        cout << "| D ";
    }
}