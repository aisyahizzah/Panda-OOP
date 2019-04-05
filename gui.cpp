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
#include "Produk.h"
#include "MeatProducing.h"
#include "MilkProducing.h"
#include "EggProducing.h"
#include "LinkedList.h"
#include "Chicken.h"
#include "Cow.h"
#include "Duck.h"
#include "Goat.h"
#include "Horse.h"
#include "Lamb.h"
#include <list>
#include <cstring>
#include <iostream>

using namespace std;

int main(){
	
	void GUI(Player* p, Barn* b[6][8], Grassland* g[6][8], Coop* c[10][4], Truck* t, Mixer* m, Well* w,LinkedList<EggProducing*> ListEggAnimal, LinkedList<MilkProducing*> ListMilkAnimal, LinkedList<MeatProducing*> ListMeatAnimal, int money);
	
	//init
	Player *p;
	p = new Player();
	string command;
	string position;
	int money = 0;

	Truck *t; t = new Truck();
	Mixer *m; m = new Mixer();
	Well *w; w = new Well(); 

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

	LinkedList<EggProducing*> ListEggAnimal;
	Chicken *c1 = new Chicken(2,1);
	c[c1->EggProducing::getX()-1][c1->EggProducing::getY()]->SetOccupied(true); 
	ListEggAnimal.add(c1);
	Duck *d1 = new Duck(3,1);
	c[d1->EggProducing::getX()-1][d1->EggProducing::getY()]->SetOccupied(true);
	ListEggAnimal.add(d1);

	LinkedList<MilkProducing*> ListMilkAnimal;;
	Cow *s1 = new Cow(6,4);
	g[s1->MilkProducing::getX()-5][s1->MilkProducing::getY()-3]->SetOccupied(true); 
	ListMilkAnimal.add(s1);
	Goat *g1 = new Goat(7,4);
	g[g1->MilkProducing::getX()-5][g1->MilkProducing::getY()-3]->SetOccupied(true);
	ListMilkAnimal.add(g1);

	LinkedList<MeatProducing*> ListMeatAnimal;
	Lamb *l1 = new Lamb(1,4);
	b[l1->MeatProducing::getX()][l1->MeatProducing::getY()-3]->SetOccupied(true); 
	ListMeatAnimal.add(l1);
	Horse *h1 = new Horse(1,5);
	b[h1->MeatProducing::getX()][h1->MeatProducing::getY()-3]->SetOccupied(true);
	ListMeatAnimal.add(h1);

	GUI(p,b,g,c,t,m,w,ListEggAnimal,ListMilkAnimal,ListMeatAnimal,money);
		do{
			cout << " Command : ";
			cin >> command;
			if (command == "MOVE"){
				cin >> position;
				if (c1->moveRandom((Land* (*)[4])c,(Land* (*)[8])b)==2){
					ListMeatAnimal.add(c1);
					ListEggAnimal.remove(c1);
				}
				if (position == "UP"){
					p->MoveUp();
					GUI(p,b,g,c,t,m,w,ListEggAnimal,ListMilkAnimal,ListMeatAnimal,money);
				} else if (position == "DOWN"){
					p->MoveDown();
					GUI(p,b,g,c,t,m,w,ListEggAnimal,ListMilkAnimal,ListMeatAnimal,money);
				} else if (position == "RIGHT"){
					p->MoveRight();
					GUI(p,b,g,c,t,m,w,ListEggAnimal,ListMilkAnimal,ListMeatAnimal,money);
				} else if (position == "LEFT"){
					p->MoveLeft();
					GUI(p,b,g,c,t,m,w,ListEggAnimal,ListMilkAnimal,ListMeatAnimal,money);
				}
			} else if (command == "TALK"){
				cout << " " << command <<endl;
				GUI(p,b,g,c,t,m,w,ListEggAnimal,ListMilkAnimal,ListMeatAnimal,money);
			} else if (command == "INTERACT"){
				p->Interact(*w);
				p->Interact(*m);
				p->Interact(*t);
				cout << " " << command <<endl;
				GUI(p,b,g,c,t,m,w,ListEggAnimal,ListMilkAnimal,ListMeatAnimal,money);
			} else if (command == "KILL"){
				cout << " " << command <<endl;
				GUI(p,b,g,c,t,m,w,ListEggAnimal,ListMilkAnimal,ListMeatAnimal,money);
			} else if (command == "GROW"){
				if ((p->getY()<=3) && (p->getX()>1)){
					p -> Grow(c[p->getX()-1][p->getY()]);
				} else if (p->getY()>3){
					if(p->getX()<=5){
					p -> Grow(b[p->getX()][p->getY()-3]);
					} else{
						p -> Grow(g[p->getX()-5][p->getY()-3]);
					}
				}
				GUI(p,b,g,c,t,m,w,ListEggAnimal,ListMilkAnimal,ListMeatAnimal,money);	
			} else  if (command!="EXIT"){
				cout << " INVALID COMMAND" << endl;
				GUI(p,b,g,c,t,m,w,ListEggAnimal,ListMilkAnimal,ListMeatAnimal,money);
			}
		} while (command != "EXIT");

	return 0;
}

void GUI(Player* p, Barn* b[6][8], Grassland* g[6][8], Coop* c[10][4], Truck* t, Mixer* m, Well* w,LinkedList<EggProducing*> ListEggAnimal,LinkedList<MilkProducing*> ListMilkAnimal, LinkedList<MeatProducing*> ListMeatAnimal, int money){
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
                if (c[j][i]->IsRumputExist()&&(i != p->getY() || j+1 != p->getX())&&!(c[j][i]->IsOccupied())){
					cout << "| * ";
                } else if (!c[j][i]->IsRumputExist()&& (i != p-> getY() || j+1 != p->getX())&&!(c[j][i]->IsOccupied())){
                    cout << "| o ";
                } else if (p->getY() == i && p->getX() == j+1&&!(c[j][i]->IsOccupied())){
					cout << "| P ";
				} else if (c[j][i]->IsOccupied()){
					int count = 1;
					bool found = false;
					while (count<=ListEggAnimal.count()&&!(found)){
						if (((ListEggAnimal.get(count)->getX()-1)==j)&&((ListEggAnimal.get(count)->getY())==i)){
							ListEggAnimal.get(count)->print();
							found = true;
						} else{
							count += 1;
						}
					}
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
                if (b[j][i]->IsRumputExist()&&(i+3 != p->getY() || j != p->getX())&&!(b[j][i]->IsOccupied())){
                    cout << "| @ ";
                } else if (b[j][i]->IsRumputExist()==false&&(i+3 != p->getY() || j != p->getX())&&!(b[j][i]->IsOccupied())){
                    cout << "| x ";
                }else if (p-> getY() == i+3 && p->getX() == j && !(b[j][i]->IsOccupied())){
					cout << "| P ";
				}else if (b[j][i]->IsOccupied()){
					int count = 1;
					bool found = false;
					while (count<=ListMeatAnimal.count()&&!(found)){
						if (((ListMeatAnimal.get(count)->getX())==j)&&((ListMeatAnimal.get(count)->getY()-3)==i)){
							ListMeatAnimal.get(count)->print();
							found = true;
						} else{
							count += 1;
						}
					}
				}
			}
			for (int j = 1; j <= 5; j++){
				if (g[j][i]->IsRumputExist()&&(i+3 != p->getY() || j+5 != p->getX())&& !(g[j][i]->IsOccupied())){
                    cout << "| # ";
                } else if (g[j][i]->IsRumputExist()==false&&(i+3 != p->getY() || j+5 != p->getX()) && !(g[j][i]->IsOccupied())){
                    cout << "| - ";
                }else if (p-> getY() == i+3 && p->getX() == j+5 && !(g[j][i]->IsOccupied())){
					cout << "| P ";
				}else if (g[j][i]->IsOccupied()){
					int count = 1;
					bool found = false;
					while (count<=ListMilkAnimal.count()&&!(found)){
						if (((ListMilkAnimal.get(count)->getX()-5)==j)&&((ListMilkAnimal.get(count)->getY()-3)==i)){
							ListMilkAnimal.get(count)->print();
							found = true;
						} else{
							count += 1;
						}
					}
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
