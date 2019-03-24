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

void Land::SetOccupied(){

}
void Land::SetRumput(){

}