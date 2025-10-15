#include "Mahasiswa2.h"
void InputDataMhs(Mahasiswa &m) {
    cout << "Input NIM: ";
    cin >> m.nim;
    cout << "Input Nama: ";
    cin.ignore(); 
    getline(cin, m.nama);
    cout << "Input Nilai UTS: ";
    cin >> m.uts;
    cout << "Input Nilai UAS: ";
    cin >> m.uas;
    cout << "Input Nilai Tugas: ";
    cin >> m.tugas;
    HitungNilaiAkhir(m); 
}

void HitungNilaiAkhir(Mahasiswa &m) {
    m.nilai_akhir = (0.3 * m.uts) + (0.4 * m.uas) + (0.3 * m.tugas);
}

void TampilMhs(Mahasiswa m) {
    cout << "NIM\t\t: " << m.nim << endl;
    cout << "Nama\t\t: " << m.nama << endl;
    cout << "Nilai UTS\t: " << m.uts << endl;
    cout << "Nilai UAS\t: " << m.uas << endl;
    cout << "Nilai Tugas\t: " << m.tugas << endl;
    cout << "Nilai Akhir\t: " << m.nilai_akhir << endl;
}
