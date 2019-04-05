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
void Horse::moveRandom(Cell*,Cell*){

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