#ifndef PLAYER_H
#define PLAYER_H
#include "Produk.h"
#include "Object.h"
#include "LinkedList.h"
#include "MilkProducing.h"
#include "MeatProducing.h"
#include "EggProducing.h"

#include "Chicken.h"
#include "Cow.h"
#include "Duck.h"
#include "Goat.h"
#include "Lamb.h"

using namespace std;

class Player: public Object{
	private:
		int WadahAir;
		LinkedList <Produk> Tas;
		int size_tas;
		
	public:
		// ctor
		Player();

		//dtor
		~Player();
				
		//getter
		int getWadahAir();
		int getNeffTas();
		
		//setter
		void setWadahAir(int _WadahAir);
		
		bool isTasFull();
		bool isTasEmpty();
		bool isWadahAirFull();
		bool isWadahAirEmpty();

		void addProduk(Produk P);
		void removeProduk(int indeks);
		
		// Methods
		void Talk(Chicken C);
		void Talk(Cow C);
		void Talk(Duck D);
		void Talk(Goat G);
		void Talk(Lamb B);

		void Interact(MilkProducing hewan);
		void Interact(MeatProducing hewan);
		void Interact(EggProducing hewan);
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