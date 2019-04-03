#ifndef PRODUK_H
#define PRODUK_H

class Produk{
    private:
        static int  n_produk;
        int harga;
    public:
        Produk(int);
        ~Produk();
        int getHarga();
        static int Get_N_Produk();
};

#endif