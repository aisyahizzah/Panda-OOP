#ifndef LAND_H
#define LAND_H
class Land : public Cell{
	private:
		bool occupied;
		bool rumput;
    public:
    	Land();


    	//Jika ada hewan
    	bool IsOccupied();
    	bool IsRumputExist();

    	void SetOccupied();
    	void SetRumput();
};

#endif