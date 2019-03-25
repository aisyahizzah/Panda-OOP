#ifndef LAND_H
#define LAND_H
#include "Cell.h"

class Land : public Cell{
	private:
		bool occupied;
		bool rumput;
    public:
    	Land();


    	//Jika ada hewan
    	bool IsOccupied();
    	bool IsRumputExist();

    	void SetOccupied(bool );
    	void SetRumput(bool );
};

#endif
