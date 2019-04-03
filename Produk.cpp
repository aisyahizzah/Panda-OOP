#include "Produk.h"
int n_produk = 0;

Produk::Produk(int _value){
	harga = _value;
	n_produk++;
}

Produk::~Produk(){
	n_produk--;
}

int Produk::getHarga(){
	return harga;
}

int Get_N_Produk(){
	return n_produk;
}