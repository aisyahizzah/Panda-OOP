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

	public:
		Cell();

		void SetKategori(string value);
		string getKategori();

		int getX();
		int getY();

		void setX(int);
		void setY(int);
};

#endif