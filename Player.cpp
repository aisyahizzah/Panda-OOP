#include "Player.h"
#include "Barn.h"
#include "Coop.h"
#include "Grassland.h"
#include "Produk.h"

// ctor
Player::Player(){
    setXY(10,1);
    WadahAir = 5;
    size_tas = 10;
    money = 0;
    vector <Produk> Tas;
}

//dtor
Player::~Player(){
    WadahAir = 0;
    size_tas = 0;
    money = 0;
    delete[] &Tas; 
}
        
//getter
int Player::getWadahAir(){
    return WadahAir;
}
int Player::getNeffTas(){
    return size_tas;
}
int Player::getMoney(){
    return money;
}

//setter
void Player::setWadahAir(int _WadahAir){
    WadahAir = _WadahAir;
}
void Player::setMoney(int money){
    this->money = money;
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

void Player::PrintTas(){
    for(int i=0;i<Tas.size();i++){
        cout <<Tas[i].getNama()<<endl;
    }
}
void Player::addProduk(Produk P){
    Tas.push_back(P);
}

void Player::removeProduk(string nama){
    vector<Produk>::iterator it;
    int i=0;
    bool found=false;
    string temp;
    it = Tas.begin();
    while(i<Tas.size() && !found){
        if (Tas[i].getNama().compare(nama)==0){
            found = true;
        }else{
          i++;
          it++;
        }
    }
    Tas.erase(it);
}
int Player::removeAll(){
    vector<Produk>::iterator it;
    int i=0;
    string temp;
    it = Tas.begin();
    int sum = 0;
    while(i<Tas.size()){
        sum += Tas[i].getHarga();
        Tas.erase(it);
        i++;
        it++;
    }
    return sum;
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

void Player::Interact(Mixer m){
    if ((getX()-1) == 1 and getY() == 2){
        
    }
}

void Player::Interact(Truck t){
    if ((getX()-1) == 1 and getY() == 1){
        setMoney(getMoney() + removeAll());
    }
}

void Player::Interact(Well w){
    if ((getX()-1) == 1 and getY() == 3){
        setWadahAir(5);
    }
    else if (getX() == 1 and (getY()-1) == 3){
        setWadahAir(5);
    }
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
void Player::Grow(Barn *b){
    if (getWadahAir() > 0 and b->IsRumputExist() == false){
        b->SetRumput(true);
        setWadahAir(getWadahAir()-1);
    }
}
void Player::Grow(Coop *c){
    if (getWadahAir() > 0 and c->IsRumputExist() == false){
        c->SetRumput(true);
        setWadahAir(getWadahAir()-1);
    }
}
void Player::Grow(Grassland *g){
    if (getWadahAir() > 0 and g->IsRumputExist() == false){
        g->SetRumput(true);
        setWadahAir(getWadahAir()-1);
    }
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
    if ( (getY()-1) == 3 and getX() == 1  ) {
        // player not move, ada facility
    }
    else {
        if ( (getY()-1) >= 1 ) {
            setXY(getX(),getY()-1);
        }
    }
}
void Player::MoveDown(){
    if ( (getY()+1) <= 10 ) {
        setXY(getX(),getY()+1);
    }
}
void Player::MoveLeft(){
    if ( (getX()-1) == 1 and getY() <= 3 ) {
        // player not move, ada facility
    }
    else {
        if ( (getX()-1) >= 1 ) {
            setXY(getX()-1,getY());
        }
    }
}
void Player::MoveRight(){
    if ( (getX()+1) <= 10 ) {
        setXY(getX()+1,getY());
    }
}