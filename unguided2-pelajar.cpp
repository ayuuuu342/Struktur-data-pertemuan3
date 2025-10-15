#include "pelajar.h"
pelajar create_pelajar(string namapel, string kodepel)
{
    pelajar pel;
    pel.namamapel = namapel;
    pel.kodemapel = kodepel;
    return pel;
}
void tampil_pelajaran(pelajar pel)
{
    cout << "Nama Pelajaran: " << pel.namamapel << endl;
    cout << "Nilai: " << pel.kodemapel << endl;
}
