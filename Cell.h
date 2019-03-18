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
		string kategori;

	public:
		Cell();

		void SetKategori(string value);
};

#endif