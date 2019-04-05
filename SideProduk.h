#include "Produk.h"
#include <string>
using namespace std;

#ifndef SIDEPRODUCT_H
#define SIDEPRODUCT_H

class SideProduk : Produk{
    private:
        static int n_sideproduk;
    public:
        SideProduk(int, string);
        ~SideProduk();
        static int Get_N_SideProduk();

};

#endif