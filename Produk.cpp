#include "Produk.h"

int Produk::n_produk = 0;

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

int Produk::Get_N_Produk(){
	return n_produk;
}