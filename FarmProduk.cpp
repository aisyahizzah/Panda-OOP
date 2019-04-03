#include "FarmProduk.h"

static int n_farmproduk = 0;
FarmProduk::FarmProduk(int value) : Produk(value){
	n_farmproduk++;
}

FarmProduk::~FarmProduk(){
	n_farmproduk--;
}

int Get_N_FarmProduk(){
	return n_farmproduk;
}