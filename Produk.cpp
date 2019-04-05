#include "Produk.h"
int Produk::n_produk = 0;

Produk::Produk(){}

Produk::Produk(int value, string _nama){
	harga = value;
	nama = _nama;
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

string Produk::getNama(){
	return nama;
}

void Produk::setNama(string name){
	nama = name;
}
int Produk::Get_N_Produk(){
	return n_produk;
}
