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