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

void Duck::moveRandom(Cell*,Cell*){

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