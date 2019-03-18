#include "Object.h"

#ifndef PLAYER_H
#define PLAYER_H
class Player : public Object{
	private:
		int wadahAir;
		int kapasitas;
		Produk tas*;
	public:
		void Talk(){
			x = player.GetX();
			y = player.GetY();
			if (cell[x][y].kategori == "Barn") {
				if (barn[x][y].isOcupied == true) {
					//moo2
				}
			}
			else if (cell[x][y].kategori == "Coop") {
				if (coop[x][y].isOcupied == true) {
					//petok2
				}
			}
			else if (cell[x][y].kategori == "Grassland") {
				if (grass[x][y].isOcupied == true) {
					//petok2
				}
			}
			else {
				//no2
			}
		}
};
#endif