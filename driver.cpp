//g++ driver.cpp Player.cpp Object.cpp Cell.cpp Land.cpp Facility.cpp Coop.cpp Barn.cpp Grassland.cpp Truck.cpp Mixer.cpp Well.cpp -o main

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
	
	Truck *t;
	Mixer *m;
	Well *w;

	t = new Truck();
	m = new Mixer();
	w = new Well(); 
	
	Barn *b[6][6];
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			b[i][j] = new Barn(i,j);
		}
	}

	Grassland *g[6][6];
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			g[i][j] = new Grassland(i,j);
		}
	}

	Coop *c[4][10];
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 10; j++){
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
			cout << c[i][j]->getKategori() << "  ";
		}
		cout << endl;
	}

	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			cout << b[i][j]->getKategori() << "  ";
		}
		for (int j = 1; j <= 5; j++){
			cout << g[i][j]->getKategori() << " ";
		}
		cout << endl;
	}
	

	return 0;
}

