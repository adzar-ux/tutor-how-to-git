#include <iostream>
using namespace std;

int main() {
    int kode, 
        harga, 
        uang, 
        sisa, 
        kembalian, 
        lembarLimaRibu, 
        lembarSatuRibu;

    cout << "VENDING MACHINE AUTOMAT\n";
    cout << "Pilihan Minuman:\n";
    cout << "1. Air Mineral (Rp 4000)\n";
    cout << "2. Teh Botol (Rp 6000)\n";
    cout << "3. Kopi Susu (Rp 10000)\n";
    cout << "Pilih kode minuman (1-3): ";
    cin >> kode;

    switch (kode) {
        case 1:
            harga = 4000;
            break;
        case 2:
            harga = 6000;
            break;
        case 3:
            harga = 10000;
            break;
        default:
            cout << "Error: Kode minuman tidak valid.\n";
            return 0;
    }

    cout << "Masukkan uang Anda (Rp): ";
    cin >> uang;
    
    cout << "DETAIL TRANSAKSI\n";

    if (uang < harga) {
        sisa = harga - uang;
        cout << "Transaksi Gagal! Uang Anda kurang Rp " << sisa << ".\n";
    } else {
        kembalian = uang - harga;
        cout << "Transaksi Berhasil!\n";
        cout << "Total Kembalian: Rp " << kembalian << "\n";
        
        if (kembalian > 0) {
            lembarLimaRibu = kembalian / 5000;
            kembalian = kembalian % 5000;
            
            lembarSatuRibu = kembalian / 1000;
            
            if (lembarLimaRibu > 0) {
                cout << lembarLimaRibu << " Lembar Rp 5.000\n";
            }
            if (lembarSatuRibu > 0) {
                cout << lembarSatuRibu << " Lembar Rp 1.000\n";
            }
        }
    }

    return 0;
}