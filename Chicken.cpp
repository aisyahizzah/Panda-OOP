#include "Chicken.h"
#include <iostream>

using namespace std;
Chicken::Chicken(){
    
}

Chicken::Chicken(int x,int y){
    EggProducing::setXY(x,y);
    MeatProducing::setXY(0,0);
}

Chicken::~Chicken(){

}

int Chicken::moveRandom(Land* c[10][4], Land* b[6][8]){
    if (EggProducing::hungry%5==0){
        if ((EggProducing::landType(EggProducing::getX(),EggProducing::getY())==1)){
            if ((EggProducing::landType(EggProducing::getX(),EggProducing::getY()+1)==1)){
                if (!(c[EggProducing::getX()-1][EggProducing::getY()+1]->IsOccupied())){
                    c[EggProducing::getX()-1][EggProducing::getY()]->SetOccupied(false);
                    this->EggProducing::setXY(EggProducing::getX(),EggProducing::getY()+1);
                    c[EggProducing::getX()-1][EggProducing::getY()]->SetOccupied(true);
                }
                return 1;
            } else if ((EggProducing::landType(EggProducing::getX(),EggProducing::getY()+1)==2)){
                this->MeatProducing::setXY(EggProducing::getX(),EggProducing::getY()+1);
                this->EggProducing::setXY(0,0);
                if (!(b[2][1]->IsOccupied())){
                    c[MeatProducing::getX()-1][MeatProducing::getY()-1]->SetOccupied(false);
                    this->MeatProducing::setXY(MeatProducing::getX(),MeatProducing::getY());
                    b[MeatProducing::getX()][MeatProducing::getY()-3]->SetOccupied(true);
                }
                return 2;
            }
        } else if ((MeatProducing::landType(MeatProducing::getX(),MeatProducing::getY())==2)){
            if (!(b[MeatProducing::getX()][MeatProducing::getY()-2]->IsOccupied())){
                b[MeatProducing::getX()][MeatProducing::getY()-3]->SetOccupied(false);
                this->MeatProducing::setXY(MeatProducing::getX(),MeatProducing::getY()+1);
                b[MeatProducing::getX()][MeatProducing::getY()-3]->SetOccupied(true);
            }
            return 1;
        }
        //EggProducing::hungry -= 1;
    }   /*else if (EggProducing::hungry%5==1){
        if ((EggProducing::landType(EggProducing::getX(),EggProducing::getY())==1)){
            if ((EggProducing::landType(EggProducing::getX(),EggProducing::getY()+1)==1)){
                if (!(c[EggProducing::getX()-1][EggProducing::getY()+1]->IsOccupied())){
                    c[EggProducing::getX()-1][EggProducing::getY()]->SetOccupied(false);
                    this->EggProducing::setXY(EggProducing::getX(),EggProducing::getY()+1);
                    c[EggProducing::getX()-1][EggProducing::getY()]->SetOccupied(true);
                }
                return 1;
            }
        }
        EggProducing::hungry -= 1;
    }*/
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