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
int Lamb::moveRandom(Land*, Land*){

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