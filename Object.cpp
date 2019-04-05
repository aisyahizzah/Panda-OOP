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

int Object::landType(){
    int _x, _y;
    _x = getX();
    _y = getY();
    //asumsi Object selalu di land
    if (_x >= 2 and _x <= 10 and _y >= 1 and y<=3){
        return 1; //coop
    }
    else if (_x >= 1 and _x <= 5 and _y >= 4){
        return 2; //barn
    }
    else if (_x >=6 and _x <=10 and y >=4){
        return 3; //grass
    } 
    else{
        return 0;
    }
}

int Object::landType(int x, int y){
    int _x = x;
    int _y = y;
    //asumsi Object selalu di land
    if (_x >= 2 and _x <= 10 and _y >= 1 and y<=3){
        return 1; //coop
    }
    else if (_x >= 1 and _x <= 5 and _y >= 4 and y<=10){
        return 2; //barn
    }
    else if (_x >=6 and _x <=10 and y >=4 and y<=10){
        return 3; //grass
    } 
    else{
        return 0;
    }
}