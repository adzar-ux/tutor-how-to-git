#include <iostream>
using namespace std;

int main() {
    int   belanja, 
                diskon = 0, 
                totalBayar;

    int persentase = 0;

    cout << "Kalkulator Kasir Toko Buku\n";
    cout << "Masukkan total belanja (Rp): ";
    cin >> belanja;

    
    if (belanja >= 300000) {
        persentase = 20;
    } else if (belanja >= 100000) {
        persentase = 10;
    } else {
        persentase = 0;
    }

    
    diskon = (belanja * persentase) / 100;
    totalBayar = belanja - diskon;

    
    cout << "Ringkasan Pembayaran\n";
    cout << "Diskon (" << persentase << "%) :\n";
    cout << "Rp " << diskon << "\n";
    cout << "Total Bayar\n";
    cout << ": Rp " << totalBayar << "\n";

    return 0;
}