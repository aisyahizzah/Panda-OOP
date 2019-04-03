#include "FarmProduk.h"

int FarmProduk::n_farmproduk = 0;

FarmProduk::FarmProduk(){}

FarmProduk::FarmProduk(int value){
	setHarga(value);
	n_farmproduk++;
}

FarmProduk::~FarmProduk(){
	n_farmproduk--;
}

int FarmProduk::Get_N_FarmProduk(){
	return n_farmproduk;
}