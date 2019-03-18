#include "Cell.h"
#include "Mixer.h"
#include "Well.h"
#include "Coop.h"
#include "Barn.h"
#include "Grassland.h"

#include "Truck.h"

using namespace std;
int main(){
	int N = 10;
	Cell **peta;
	peta = new Cell*[N+1];
	for (int i = 1; i <= N; i++){
		peta[i] = new Cell[N+1];
	}

	Truck truk(peta[1][1]);
	truk.SetKategori("Truck");

	Mixer mixer(peta[2][1]);
	mixer.SetKategori("Mixer");

	Well well(peta[3][1]);
	well.SetKategori("Well");

	Coop coop[3 + 1][9 + 1];
	Barn barn[7 + 1][5 + 1];
	Grassland grass[7 + 1][5 + 1];

	//COOP
	for (int i = 1; i <= 4; i++){
		for (int  j = 1; j <= 10; j++){
			peta[i][j + 1].SetKategori("Coop");
		}
	}

	//BARN dan GRASSLAND
	for (int i = 1; i <= 8; i++){
		for (int  j = 1; j <= 6; j++){
			peta[i + 3][j].SetKategori("Barn");
			peta[i + 3][j + 5].SetKategori("Grass");
		}
	}

	return 0;
}