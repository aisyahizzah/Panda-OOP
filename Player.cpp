#include "Player.h"
#include "Barn.h"
#include "Coop.h"
#include "Grassland.h"

#include "Produk.h"

// ctor
Player::Player(){
    setXY(1,1);
    WadahAir = 0;
    size_tas = 10;
    LinkedList <Produk> *Tas;
    Tas = new LinkedList <Produk>();
}

//dtor
Player::~Player(){
    WadahAir = 0;
    size_tas = 0;
    delete[] &Tas; 
}
        
//getter
int Player::getWadahAir(){
    return WadahAir;
}
int Player::getNeffTas(){
    return size_tas;
}

//setter
void Player::setWadahAir(int _WadahAir){
    WadahAir = _WadahAir;
}

bool Player::isTasFull(){
    return 0;
}
bool Player::isTasEmpty(){
    return 0;
}
bool Player::isWadahAirFull(){
    return (WadahAir == 5);
}
bool Player::isWadahAirEmpty(){
    return (WadahAir == 0);
}

void Player::addProduk(Produk P){

}
void Player::removeProduk(int indeks){

}

/*
    Interaksi & Manipulasi
    Sekali interaksi hanya bisa dengan satu objek
    tidak diberikan pilihan,
    pengecekan objek dimulai dari atas, kanan, bawah, kiri PLAYER
*/

void Player::Talk(Chicken C){
    C.makeVoice();
}
void Player::Talk(Cow C){
    C.makeVoice();
}

void Player::Talk(Duck D){
    D.makeVoice();
}

void Player::Talk(Goat G){
    G.makeVoice();
}

void Player::Talk(Lamb L){
    L.makeVoice();
}

void Player::Interact(MilkProducing hewan){
    /*
    hewan.setProduceMilk(true);
    addProduk(Produk(1000));
    */
}

void Player::Interact(MeatProducing hewan){

}

void Player::Interact(EggProducing hewan){
    
}
void Player::Kill(MeatProducing hewan){
    int x, y;
    x = getX();
    y = getY();
}
void Player::Grow(){
    int x, y;
    x = getX();
    y = getY();
}

/*
void Player::Grow(Barn **b, Coop **c, Grassland **g){
    int x, y;
    x = getX();
    y = getY();
    if (landType() == 1){
        b[x-1][y].SetOccupied(true);
    }
    else if (landType() == 1){
        c[x-1][y].SetOccupied(true);
    }
    else if (landType() == 1){
        g[x-1][y].SetOccupied(true);
    }
}
*/

void Player::Mix(){

}

//Move
void Player::MoveUp(){
    if ( (getY()-1) >= 1 ) {
        setXY(getX(),getY()-1);
    }
}
void Player::MoveDown(){
    if ( (getY()+1) <= 10 ) {
        setXY(getX(),getY()+1);
    }
}
void Player::MoveLeft(){
    if ( (getX()-1) >= 1 ) {
        setXY(getX()-1,getY());
    }
}
void Player::MoveRight(){
    if ( (getX()+1) <= 10 ) {
        setXY(getX()+1,getY());
    }
}