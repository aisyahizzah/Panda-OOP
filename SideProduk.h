#include "Produk.h"

#ifndef SIDEPRODUCT_H
#define SIDEPRODUCT_H

class SideProduk : Produk{
    private:
        static int n_sideproduk;
    public:
        SideProduk(int);
        ~SideProduk();
        static int Get_N_SideProduk();

};

#endif