#include "Truck.h"

Truck::Truck(){
    SetKategori("Truck");
    setX(1);
    setY(1);
}

Truck::Truck(Cell c){
    SetKategori(c.getKategori());
    setX(c.getX());
    setY(c.getY());
}