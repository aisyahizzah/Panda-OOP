#include "Produk.h"

#ifndef FARMPRODUCT_H
#define FARMPRODUCT_H

class FarmProduk : public Produk{
    private:
        static int n_farmproduk;
    public:
        FarmProduk();
        FarmProduk(int );
        ~FarmProduk();
        static int Get_N_FarmProduk();
};

#endif