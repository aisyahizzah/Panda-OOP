#include "Object.h"

Object::Object(){
    setXY(1,1);
}

Object::Object(int x, int y){
    setXY(x,y);
}

//Getter
int Object::getX(){
    return x;
}
int Object::getY(){
    return y;
}
//Setter
void Object::setXY(int _x, int _y){
    x = _x;
    y = _y;
}