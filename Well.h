#include "Facility.h"

#ifndef WELL_H
#define WELL_H

class Well : public Facility{
    public:
        Well();
        Well(Cell W);
};

#endif