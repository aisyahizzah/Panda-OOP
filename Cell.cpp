#include "Cell.h"

Cell::Cell(){
    kategori = "";
}

void Cell::SetKategori(string value){
    kategori = value;
}

string Cell::getKategori(){
    return kategori;
}

int Cell::getX(){
    return x;
}

int Cell::getY(){
    return y;
}

void Cell::setX(int _x){
    x = _x;
}

void Cell::setY(int _y){
    y = _y;
}