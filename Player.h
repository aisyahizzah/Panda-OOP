#ifndef PLAYER_H
#define PLAYER_H
#include "Produk.h"
#include "Object.h"
#include <vector>
#include "MilkProducing.h"
#include "MeatProducing.h"
#include "EggProducing.h"
#include "Well.h"
#include "Truck.h"
#include "Mixer.h"
#include <iostream>
#include "Chicken.h"
#include "Cow.h"
#include "Duck.h"
#include "Goat.h"
#include "Lamb.h"
using namespace std;

class Player: public Object{
	private:
		int WadahAir;
		vector <Produk> Tas;
		int size_tas;
		int money;
		
	public:
		// ctor
		Player();

		//dtor
		~Player();
				
		//getter
		int getWadahAir();
		int getNeffTas();
		int getMoney();
		
		//setter
		void setWadahAir(int _WadahAir);
		void setMoney(int );
		
		bool isTasFull();
		bool isTasEmpty();
		bool isWadahAirFull();
		bool isWadahAirEmpty();

		void PrintTas();
		void addProduk(Produk P);
		void removeProduk(string nama);
		int removeAll();
		
		// Methods
		void Talk(Chicken C);
		void Talk(Cow C);
		void Talk(Duck D);
		void Talk(Goat G);
		void Talk(Lamb B);

		void Interact(MilkProducing hewan);
		void Interact(MeatProducing hewan);
		void Interact(EggProducing hewan);
		void Interact(Well);
		void Interact(Truck);
		void Interact(Mixer);
		void Kill(MeatProducing hewan);
		void Grow();
		void Grow(Barn *b);
		void Grow(Coop *c);
		void Grow(Grassland *g);
		/*void Grow(Barn **b, Coop **c, Grassland **g);*/
		void Mix();

		//Move
		void MoveUp();
		void MoveDown();
		void MoveLeft();
		void MoveRight();
		
};

#endif