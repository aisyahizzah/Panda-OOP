//g++ driver.cpp Player.cpp Object.cpp Cell.cpp Land.cpp Facility.cpp Coop.cpp Barn.cpp Grassland.cpp Truck.cpp Mixer.cpp Well.cpp FarmAnimal.cpp MeatProducing.cpp MilkProducing.cpp EggProducing.cpp Chicken.cpp Cow.cpp Duck.cpp Goat.cpp Horse.cpp Lamb.cpp -o main 

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
	/*
	int N = 10;
	Cell **peta;
	peta = new Cell*[N+1];
	for (int i = 1; i <= N; i++){
		peta[i] = new Cell[N+1];
	}
	*/

	
	int start = 0;
	int move;
	
	Player *p;
	p = new Player();

	while(start==0){
		cout << "move : " ;
		cin >> move;
		if (move == 1) {
			p->MoveUp();
		}
		else if (move == 2) {
			p->MoveDown();
		}
		else if (move == 3) {
			p->MoveLeft();
		}
		else if (move == 4) {
			p->MoveRight();
		}
		else{
			start = 1;
		}
		cout << p->getX() << "," << p->getY() << endl;
	}

	Chicken *c1;
	c1 = new Chicken();
	c1->makeVoice();
	cout << c1->getProduceEgg() << endl;

	Cow *cw1;
	cw1 = new Cow();
	cw1->makeVoice();
	cout << cw1->getProduceMilk() << endl;

	Duck *d1;
	d1 = new Duck();
	d1->makeVoice();
	cout << d1->getProduceEgg() << endl;
	
	Goat *g1;
	g1 = new Goat();
	g1->makeVoice();
	cout << g1->getProduceMilk() << endl;
	
	Horse *h1;
	h1 = new Horse();
	h1->makeVoice();
	cout << h1->getProduceMilk() << endl;

	Lamb *l1;
	l1 = new Lamb();
	l1->makeVoice();
	cout << l1->getProduceMilk() << endl;

	Truck *t;
	Mixer *m;
	Well *w;

	t = new Truck();
	m = new Mixer();
	w = new Well(); 
	
	Barn *b[6][8];
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 7; j++){
			b[i][j] = new Barn(i,j);
		}
	}

	Grassland *g[6][8];
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 7; j++){
			g[i][j] = new Grassland(i,j);
		}
	}

	Coop *c[10][4];
	for (int i = 1; i <= 9; i++){
		for (int j = 1; j <= 3; j++){
			c[i][j] = new Coop(i,j);
		}
	}

	for (int i = 1; i <= 3; i++){
		if (i == 1){
			cout << t->getKategori() << " ";		
		}
		else if (i == 2){
			cout << m->getKategori() << " ";		
		}
		else{
			cout << w->getKategori() << "  ";		
		}
		for (int j = 1; j <= 9; j++){
			cout << c[j][i]->getKategori() << "  ";
		}
		cout << endl;
	}

	for (int i = 1; i <= 7; i++){
		for (int j = 1; j <= 5; j++){
			cout << b[j][i]->getKategori() << "  ";
		}
		for (int j = 1; j <= 5; j++){
			cout << g[j][i]->getKategori() << " ";
		}
		cout << endl;
	}

	return 0;
}

