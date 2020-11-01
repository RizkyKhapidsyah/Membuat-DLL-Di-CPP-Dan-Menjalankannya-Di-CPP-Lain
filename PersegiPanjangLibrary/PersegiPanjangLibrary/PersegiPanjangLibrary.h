#pragma once

#ifdef PERSEGIPANJANGLIBRARY_EXPORTS
#define PERSEGIPANJANGLIBRARY_API __declspec(dllexport)
#else
#define PERSEGIPANJANGLIBRARY_API __declspec(dllimport)
#endif

extern "C" PERSEGIPANJANGLIBRARY_API void InisialisasiVariabel(int PanjangParam, int LebarParam);

extern "C" PERSEGIPANJANGLIBRARY_API int HitungLuas(int PanjangParam, int LebarParam);

extern "C" PERSEGIPANJANGLIBRARY_API int HitungKeliling(int PanjangParam, int LebarParam);
