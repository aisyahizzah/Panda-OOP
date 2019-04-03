#include "SideProduk.h"
int SideProduk::n_sideproduk = 0;
SideProduk::SideProduk(int value) : Produk(value){
	n_sideproduk++;	
}

SideProduk::~SideProduk(){
	n_sideproduk--;
}

int SideProduk::Get_N_SideProduk(){
	return n_sideproduk;
}