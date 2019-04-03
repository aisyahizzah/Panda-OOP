#include "SideProduk.h"
static int n_sideproduk = 0;
SideProduk::SideProduk(int value) : Produk(value){
	n_sideproduk++;	
}

SideProduk::~SideProduk(){
	n_sideproduk--;
}

int Get_N_SideProduk(){
	return n_sideproduk;
}