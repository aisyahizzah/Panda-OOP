#include "Produk.h"
int n_produk = 0;

Produk::Produk(){}

Produk::Produk(int value){
	harga = value;
	n_produk++;
}

Produk::~Produk(){
	n_produk--;
}

int Produk::getHarga(){
	return harga;
}

void Produk::setHarga(int harga){
	this->harga = harga;
}

int Get_N_Produk(){
	return n_produk;
}