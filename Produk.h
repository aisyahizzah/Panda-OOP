#ifndef PRODUK_H
#define PRODUK_H
#include <string>
using namespace std;

class Produk{
    private:
        static int n_produk;
        int harga;
        string nama;

    public:
        Produk();
        Produk(int, string);
        ~Produk();
        int getHarga();
        void setHarga(int );
        string getNama();
        void setNama(string);
        static int Get_N_Produk();
};

#endif