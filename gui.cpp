//g++ gui.cpp Player.cpp Object.cpp Cell.cpp Land.cpp Facility.cpp Coop.cpp Barn.cpp Grassland.cpp Truck.cpp Mixer.cpp Well.cpp FarmAnimal.cpp MeatProducing.cpp MilkProducing.cpp EggProducing.cpp Chicken.cpp Cow.cpp Duck.cpp Goat.cpp Horse.cpp Lamb.cpp -o main 

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
#include <cstring>
#include <iostream>

using namespace std;

int main(){
	
	void GUI(int N,Cell** peta, Player* p, Barn* b[6][8], Grassland* g[6][8], Coop* c[10][4], Truck* t, Mixer* m, Well* w, int money);
	
	int N = 10;
	Cell **peta;
	peta = new Cell*[N+1];
	for (int i = 1; i <= N; i++){
		peta[i] = new Cell[N+1];
	}
	
	Player *p;
	p = new Player();
	string command;
	string position;
	int money;
	int no;

	money = 5;

	Truck *t;
	Mixer *m;
	Well *w;

	t = new Truck();
	m = new Mixer();
	w = new Well(); 
	
	Barn *b[6][8];
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 7; j++){
			b[i][j] = new Barn(i,j+3);
		}
	}

	Grassland *g[6][8];
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 7; j++){
			g[i][j] = new Grassland(i+5,j+3);
		}
	}

	Coop *c[10][4];
	for (int i = 1; i <= 9; i++){
		for (int j = 1; j <= 3; j++){
			c[i][j] = new Coop(i+1,j);
		}
	}
    
	/*
	p->Grow(*b,*c,*g);
	cout << c[p->getX()+1][p->getY()]->IsOccupied() << endl;
	*/

		GUI(N,peta,p,b,g,c,t,m,w,money);
		do{
			cout << " Command : ";
			cin >> command;
			if (command == "MOVE"){
				cin >> position;
				if (position == "UP"){
					p->MoveUp();
					cout << p->getY() << "," << p->getX() << endl;
					GUI(N,peta,p,b,g,c,t,m,w,money);
				} else if (position == "DOWN"){
					cout << peta[10][1].getKategori();
					p->MoveDown();
					cout << p->getY() << "," << p->getX() << endl;
					GUI(N,peta,p,b,g,c,t,m,w,money);
				} else if (position == "RIGHT"){
					p->MoveRight();
					cout << p->getY() << "," << p->getX() << endl;
					GUI(N,peta,p,b,g,c,t,m,w,money);
				} else if (position == "LEFT"){
					p->MoveLeft();
					cout << p->getY() << "," << p->getX() << endl;
					GUI(N,peta,p,b,g,c,t,m,w,money);
				}
			} else if (command == "TALK"){
				cout << " " << command <<endl;
				GUI(N,peta,p,b,g,c,t,m,w,money);
			} else if (command == "INTERACT"){
				cout << " " << command <<endl;
				GUI(N,peta,p,b,g,c,t,m,w,money);
			} else if (command == "KILL"){
				cout << " " << command <<endl;
				GUI(N,peta,p,b,g,c,t,m,w,money);
			} else if (command == "GROW"){
				if ((p->getY()<=3) && (p->getX()>1)){
					p -> Grow(c[p->getX()][p->getY()]);
				} else if (p->getY()>3){
					if(p->getX()<=5){
					p -> Grow(b[p->getX()+1][p->getY()-3]);
					} else{
						p -> Grow(g[p->getX()-4][p->getY()-3]);
					}
				}
				GUI(N,peta,p,b,g,c,t,m,w,money);	
			} else  if (command!="EXIT"){
				cout << " INVALID COMMAND" << endl;
				GUI(N,peta,p,b,g,c,t,m,w,money);
			}
		} while (command != "EXIT");

	return 0;
}

void GUI(int N, Cell** peta, Player* p, Barn* b[6][8], Grassland* g[6][8], Coop* c[10][4], Truck* t, Mixer* m, Well* w, int money){
    cout << "-----------------------------------------------------------------------" << endl;
    for (int i = 1; i <= 3; i++){
			if (i == 1){
				cout << "| T ";		
			}
			else if (i == 2){
				cout << "| M ";		
			}
			else{
				cout << "| W ";		
			}
			for (int j = 1; j <= 9; j++){
                if (c[j][i]->IsRumputExist()&&(i != p->getY() || j+1 != p->getX())){
					cout << "| * ";
                } else if (!c[j][i]->IsRumputExist()&& (i != p-> getY() || j+1 != p->getX())){
                    cout << "| o ";
                }else if (p->getY() == i && p->getX() == j+1){
					cout << "| P ";
				}
			}
            if (i==3){
                cout << "|                 Engi's Farm |"<<endl;
                cout << "-----------------------------------------------------------------------" << endl;
            } else{
                cout << "|                             |"<<endl;
                cout << "-----------------------------------------                             -"<<endl;
            }
		}

		for (int i = 1; i <= 7; i++){
			for (int j = 1; j <= 5; j++){
                if (b[j][i]->IsRumputExist()&&(i+3 != p->getY() || j != p->getX())){
                    cout << "| @ ";
                } else if (b[j][i]->IsRumputExist()==false&&(i+3 != p->getY() || j != p->getX())){
                    cout << "| x ";
                }else if (p-> getY() == i+3 && p->getX() == j){
					cout << "| P ";
				}
			}
			for (int j = 1; j <= 5; j++){
				if (g[j][i]->IsRumputExist()&&(i+3 != p->getY() || j+5 != p->getX())){
                    cout << "| # ";
                } else if (g[j][i]->IsRumputExist()==false&&(i+3 != p->getY() || j+5 != p->getX())){
                    cout << "| - ";
                }else if (p-> getY() == i+3 && p->getX() == j+5){
					cout << "| P ";
				}
			}
            if (i==1){
                cout << "| Inventory :                 |"<<endl;
                cout << "-----------------------------------------                             -" <<endl;
            } else if (i==5) {
                cout << "|                             |"<<endl;
                cout << "-----------------------------------------------------------------------" <<endl;
            } else if (i==6) {
                cout << "| Money : ";
				cout << money;
				for(int i = 1; i <= 20 - (sizeof(money)/4); i++){
					cout << " ";
				}
				cout << "|"<<endl;
                cout << "-----------------------------------------------------------------------" <<endl;
            } else if (i==7) {
                cout << "| Water : ";
				cout << p->getWadahAir();
				for(int i = 1; i <= 20 - (sizeof(p->getWadahAir())/4); i++){
					cout << " ";
				}
				cout << "|"<<endl;
                cout << "-----------------------------------------------------------------------" <<endl;
            } else{
                cout << "|                             |"<<endl;
                cout << "-----------------------------------------                             -"<<endl;
            }
        }
}
