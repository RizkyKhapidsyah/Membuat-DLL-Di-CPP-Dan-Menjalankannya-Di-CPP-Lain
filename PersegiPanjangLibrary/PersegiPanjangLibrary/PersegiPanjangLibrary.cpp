#include "pch.h"
#include <utility>
#include <limits.h>
#include "PersegiPanjangLibrary.h"

static int Panjang_;
static int Lebar_;
static int Hasil_;

void InisialisasiVariabel(int PanjangParam, int LebarParam) {
	Panjang_ = PanjangParam;
	Lebar_ = LebarParam;
	Hasil_ = 0;
}

int HitungLuas(int PanjangParam, int LebarParam) {
	Hasil_ = PanjangParam * LebarParam;
	return Hasil_;
}

int HitungKeliling(int PanjangParam, int LebarParam) {
	Hasil_ = (2 * PanjangParam) + (2 * LebarParam);
	return Hasil_;
}