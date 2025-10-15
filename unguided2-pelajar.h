#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;
struct pelajar 
{
    string namamapel;
    string kodemapel;
};

pelajar create_pelajar(string namapel, string kodepel);

void tampil_pelajaran(pelajar pel);
#endif
