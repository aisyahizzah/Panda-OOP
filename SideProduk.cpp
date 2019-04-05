#include "SideProduk.h"
static int n_sideproduk = 0;
SideProduk::SideProduk(int value, string nama) : Produk(value, nama){
	n_sideproduk++;	
}

SideProduk::~SideProduk(){
	n_sideproduk--;
}

int Get_N_SideProduk(){
	return n_sideproduk;
}