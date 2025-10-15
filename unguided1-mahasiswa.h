#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED

#include <iostream>
#include <string>
#include <array>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilai_akhir; 
};

const int MAX_MHS = 10;
typedef array<Mahasiswa, MAX_MHS> ArrMahasiswa;
void InputDataMhs(Mahasiswa &m);
void HitungNilaiAkhir(Mahasiswa &m);
void TampilMhs(Mahasiswa m);
void InputArrayMhs(ArrMahasiswa &arr, int &n);
void TampilArrayMhs(const ArrMahasiswa &arr, int n);

#endif 
