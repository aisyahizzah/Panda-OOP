#include "FarmProduk.h"

int FarmProduk::n_farmproduk = 0;

FarmProduk::FarmProduk(){}

FarmProduk::FarmProduk(int value, string nama):Produk(value,nama){
	setHarga(value);
	n_farmproduk++;
}

FarmProduk::~FarmProduk(){
	n_farmproduk--;
}

int FarmProduk::Get_N_FarmProduk(){
	return n_farmproduk;
}