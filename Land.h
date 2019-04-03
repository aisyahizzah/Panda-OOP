#include "Cell.h"

#ifndef LAND_H
#define LAND_H

class Land : public Cell{
	private:
		bool occupied;
		bool rumput;

    public:
    	Land();
		~Land();

    	//Jika ada hewan
    	bool IsOccupied();
    	bool IsRumputExist();

    	void SetOccupied(bool);
    	void SetRumput(bool);
};

#endif
