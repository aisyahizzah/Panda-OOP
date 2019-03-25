#include "Land.h"

Land::Land(){
    occupied = false;
    rumput = false;
}

//Jika ada hewan
bool Land::IsOccupied(){
    return occupied;
}
bool Land::IsRumputExist(){
    return rumput;
}

void Land::SetOccupied(bool b){
    occupied = b;
}
void Land::SetRumput(bool b){
    rumput = b;
}