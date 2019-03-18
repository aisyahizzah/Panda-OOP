#ifndef PLAYER_H
#define PLAYER_H
#include "Produk.h"
#include "Object.h"

class Player: public Object{
	private:
		int WadahAir;
		Produk Tas[25];
		
	public:
		// ctor
		Player();

		//cctor
		Player(const Player& P);
		
		//dtor
		~Player();
		
		//assignment
		Player& operator=(const Player& P);
		
		//getter
		int getWadahAir();
		int getElTas(int indeks);
		int getNeffTas();
		
		//setter
		void setWadahAir(int _WadahAir);
		void setElTas(int indeks, int element);
		
		bool isTasFull();
		bool isTasEmpty();
		bool isElement(int element);
		bool isWadahAirFull();
		bool isWadahAirEmpty();
		
		void addProduk(Produk P);
		void removeProduk(Produk P);
		int findProduk(Produk P);
		
		// Methods
		void Talk();
		void Interact();
		void Kill();
		void Grow();
		void Mix();

		//Move

		void Up();
		void Down();
		void Left();
		void Right();
		
};

#endif
