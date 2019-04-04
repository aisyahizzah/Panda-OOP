#include "Cell.h"

Cell::Cell(){
    kategori = "";
}

void Cell::SetHewan(int index){
    hewan = "";
    index_list_hewan = index;
}

void Cell::SetKategori(string value){
    kategori = value;
}

string Cell::getKategori(){
    return kategori;
}

string Cell::getHewan(){
    return hewan;
}

int Cell::getIndex(){
    return index_list_hewan;
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