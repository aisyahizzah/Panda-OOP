#include "Well.h"

Well::Well(){
    SetKategori("Well");
    setX(1);
    setY(3);
}

Well::Well(Cell c){
    SetKategori(c.getKategori());
    setX(c.getX());
    setY(c.getY());
}