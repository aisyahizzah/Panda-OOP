#include "Cell.h"
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
	truk.kategori = Truck;

	Mixer mixer(peta[2][1]);
	mixer.kategori = Mixer;

	Well well(peta[3][1]);
	well.kategori = Well;

	Coop coop[3 + 1][9 + 1];
	Barn barn[7 + 1][5 + 1];
	Grassland grass[7 + 1][5 + 1];

	for (int i = 1; i <= 4; i++){
		for (int  j = 1; j <= 10; j++){
			coop[i][j] = peta[i][j + 1];
		}
	}

	for (int i = 1; i <= 8; i++){
		for (int  j = 1; j <= 6; j++){
			barn[i][j] = peta[i + 3][j];
			grass[i][j] = peta[i + 3][j + 5];

		}
	}

	return 0;
}