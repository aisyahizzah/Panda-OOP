//g++ driverProduk.cpp Player.cpp Object.cpp Cell.cpp Land.cpp Facility.cpp Coop.cpp Barn.cpp Grassland.cpp Truck.cpp Mixer.cpp Well.cpp FarmAnimal.cpp MeatProducing.cpp MilkProducing.cpp EggProducing.cpp Chicken.cpp Cow.cpp Duck.cpp Goat.cpp Horse.cpp Lamb.cpp Produk.cpp FarmProduk.cpp SideProduk.cpp Daging.cpp Susu.cpp Telur.cpp Ampela.cpp EggYolk.cpp Iga.cpp Jeroan.cpp KakiAyam.cpp Tenderloin.cpp -o main 

#include "Produk.h"
#include "SideProduk.h"
#include "FarmProduk.h"
#include "Telur.h"
#include "Susu.h"
#include "Daging.h"
#include "Tenderloin.h"
#include "KakiAyam.h"
#include "Jeroan.h"
#include "EggYolk.h"
#include "Ampela.h"
#include "Iga.h"
#include "Cell.h"
#include "Mixer.h"
#include "Well.h"
#include "Coop.h"
#include "Barn.h"
#include "Grassland.h"
#include "Truck.h"
#include "Player.h"
#include "Land.h"
#include "Object.h"
#include "FarmAnimal.h"
#include "MeatProducing.h"
#include "MilkProducing.h"
#include "EggProducing.h"
#include "Chicken.h"
#include "Cow.h"
#include "Duck.h"
#include "Goat.h"
#include "Horse.h"
#include "Lamb.h"
#include <iostream>

using namespace std;

int main(){
	
	Player *p;
	p = new Player();

    Daging *dd = new Daging(100);
    p->addProduk(*dd);
    p->addProduk(*dd);
    p->addProduk(*dd);
    p->PrintTas();
    cout << p->removeAll();

}