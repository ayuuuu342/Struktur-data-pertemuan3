#include "Mahasiswa2.h"

void InputArrayMhs(ArrMahasiswa &arr, int &n) {
    do {
        cout << "Masukkan jumlah mahasiswa (max " << MAX_MHS << "): ";
        cin >> n;
    } while (n <= 0 || n > MAX_MHS);

    for (int i = 0; i < n; ++i) {
        cout << "\n--- Input Data Mahasiswa ke-" << i + 1 << " ---" << endl;
        InputDataMhs(arr[i]); 
    }
}

void TampilArrayMhs(const ArrMahasiswa &arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "\n--- Mahasiswa ke-" << i + 1 << " ---" << endl;
        TampilMhs(arr[i]); 
    }
}

int main() {
    ArrMahasiswa data_mahasiswa;
    int jumlah_mhs = 0;

    InputArrayMhs(data_mahasiswa, jumlah_mhs);
    TampilArrayMhs(data_mahasiswa, jumlah_mhs);

    return 0;
}
    
