// PersegiPanjangClient.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include "PersegiPanjangLibrary.h"

using namespace std;

int Panjang;
int Lebar;
int Hasil;

int main()
{
    InisialisasiVariabel(0, 0);

    cout << "Hitung Luas dan Keliling Persegi Panjang" << endl << endl;
    cout << "Nilai Panjang [p]  : "; cin >> Panjang;
    cout << "Nilai Lebar   [l]  : "; cin >> Lebar;

    Hasil = HitungLuas(Panjang, Lebar);
    cout << endl << "Luas       = " << Hasil << endl;

    Hasil = HitungKeliling(Panjang, Lebar);
    cout << "Keliling   = " << Hasil << endl;

    _getch();
    return 0;
}