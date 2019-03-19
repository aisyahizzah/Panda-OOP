#include "Produk.h"

#ifndef FARMPRODUCT_H
#define FARMPRODUCT_H

class FarmProduk : Produk{
    private:
        static int n_farmproduk;
    public:
        FarmProduk();
        static int Get_N_FarmProduk();
};

#endif