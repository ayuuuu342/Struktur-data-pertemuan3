#include <iostream>
#include "pelajar.h"
using namespace std;

int main()
{
    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajar pel = create_pelajar(namapel, kodepel);
    tampil_pelajaran(pel);
    return 0;
    
}
