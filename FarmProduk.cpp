#include "FarmProduk.h"

int FarmProduk::n_farmproduk = 0;
FarmProduk::FarmProduk(int value) : Produk(value){
	n_farmproduk++;
}

FarmProduk::~FarmProduk(){
	n_farmproduk--;
}

int FarmProduk::Get_N_FarmProduk(){
	return n_farmproduk;
}