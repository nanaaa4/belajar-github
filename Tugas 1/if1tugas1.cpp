#include <iostream>
using namespace std;

int main() {
    //variabel dari SBM
    int anggaran = 88000000; //anggaran yang diberikan
    int hari = 20;
    int harga_sewa_perhari = 1103000; //SBM RP 1.103.000

    //menghitung total anggaran maksimum
    int anggaran_maksimum = hari * harga_sewa_perhari;

    //kondisi if
    if (anggaran <= anggaran_maksimum) {
        cout << "Anggaran dapat diterima." << endl;
    
    } 
    else {
        cout << "Anggaran tidak dapat diterima." << endl;
    }

    return 0;
}
