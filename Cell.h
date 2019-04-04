#include <string>

#ifndef CELL_H
#define CELL_H

using namespace std;
class Cell {
	private:
		/*
			kategori : Facility & Land
			Coop, Barn, Grass, Mixer, Truck, Well
		*/
		int x;
		int y;
		string kategori;
		string hewan;
		int index_list_hewan;

	public:
		Cell();

		void SetHewan(int index);
		void SetKategori(string value);
		string getKategori();
		string getHewan();
		int getIndex();

		int getX();
		int getY();

		void setX(int);
		void setY(int);
};

#endif