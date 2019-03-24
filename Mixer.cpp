#include "Mixer.h"

Mixer::Mixer(){
    SetKategori("Mixer");
    setX(1);
    setY(2);
}

Mixer::Mixer(Cell c){
    SetKategori(c.getKategori());
    setX(c.getX());
    setY(c.getY());
}