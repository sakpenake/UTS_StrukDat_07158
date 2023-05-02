#include <iostream>
#include <string>

using namespace std;

// Struktur data untuk menyimpan informasi barang
struct Barang {
    string nama_07158;
    int harga_07158;
    int stok_07158;
};

int main() {
    // Inisialisasi array barang
    Barang barang_07158[] = {
        {"Minyak", 15000, 10},
        {"Beras", 25000, 12},
        {"Telur", 12000, 7},
        {"Gula", 6000, 0},
        {"Mie", 3000, 6}
    };

    // Loop utama program
    while (true) {
        // Tampilkan daftar barang
        cout << "================================================================" <<endl;
        cout << "                         TOKO SEMBAKO                           " <<endl;
        cout << "================================================================" <<endl;
		cout << "No. Barang\tNama Barang\tHarga\t\tStok" << endl;
		cout << "================================================================" <<endl;
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << "\t\t" << barang_07158[i].nama_07158 << "\t\t" << barang_07158[i].harga_07158 << "\t\t" << barang_07158[i].stok_07158 << endl;
        }
		cout << "================================================================" <<endl;
        // Input nomor barang yang dibeli
        int nomor_barang_07158;
        cout << "Masukkan Kode Barang yang ingin anda beli: ";
        cin >> nomor_barang_07158;

        // Validasi nomor barang
        if (nomor_barang_07158 < 1 || nomor_barang_07158 > 4) {
            cout << "Nomor barang tidak valid" << endl;
            continue;
        }
        // Input jumlah barang yang dibeli
        int jumlah_barang_07158;
        cout << "Masukkan Jumlah Barang yang dibeli: ";
        cin >> jumlah_barang_07158;

        // Validasi jumlah barang
        if (jumlah_barang_07158 < 1 || jumlah_barang_07158 > barang_07158[nomor_barang_07158 - 1].stok_07158) {
            cout << "Jumlah barang tidak valid" << endl;
            continue;
        }
		cout << "================================================================" <<endl;
        // Hitung total harga
        int total_harga = barang_07158[nomor_barang_07158 - 1].harga_07158 * jumlah_barang_07158;

        // Kurangi stok barang
        barang_07158[nomor_barang_07158 - 1].stok_07158 -= jumlah_barang_07158;

        // Tampilkan informasi pembelian
        cout << "Nama Barang :" << barang_07158[nomor_barang_07158 - 1].nama_07158 << endl;
        cout << "Harga : Rp." << barang_07158[nomor_barang_07158 - 1].harga_07158 << endl;
        cout << "Jumlah barang : " << jumlah_barang_07158 << endl;
		cout << "Total harga : Rp." << total_harga << endl;
        cout << "Sisa Stok Barang : " << barang_07158[nomor_barang_07158 - 1].stok_07158 << endl;

        // Tanya apakah ingin membeli lagi
        char jawaban;
        cout << "================================================================" <<endl;
        cout << "Apakah Anda ingin membeli lagi? (Y/T) ";
        cin >> jawaban;
        if (jawaban != 'Y' && jawaban != 'y') {
            break;
        }
    }

    cout << "Terimakasih telah membeli barang di toko kami" << endl;

    return 0;
}
