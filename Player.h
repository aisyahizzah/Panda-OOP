#ifndef PLAYER_H
#define PLAYER_H
#include "Produk.h"
#include "Object.h"
#include "LinkedList.h"

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
		void Talk();
		void Interact();
		void Kill();
		void Grow();
		/*void Grow(Barn **b, Coop **c, Grassland **g);*/
		void Mix();

		//Move
		void MoveUp();
		void MoveDown();
		void MoveLeft();
		void MoveRight();
		
};

#endif