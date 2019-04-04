#include "Land.h"
#include "EggProducing.h"

#ifndef COOP_H
#define COOP_H
class Coop : public Land{
	public:
		Coop();
		Coop(int x, int y);
		~Coop();
};

#endif