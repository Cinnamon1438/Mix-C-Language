#include <iostream>

using namespace std;

int main() {
    int hrgbrg1, hrgbrg2,hrgbrg3, jmlh1, jmlh2, jmlh3, diskon, totalharga, hargabersih;

    cout << "selamat datang di toko sufi" << endl;
    cout << "daftar barang dan harga:" << endl;
    cout << "member tag biru:Rp.100.000" << endl;
    cout << "member tag merah:Rp.100.000" << endl;
    cout << "non membertagbiru:Rp.150.000" << endl;
    cout << "non membertagmerah:Rp.150.000" << endl;
    cout << "========================================"<<endl;

    cout << "masukan harga barang 1 : Rp. ";
    cin >> hrgbrg1;
    cout << "jumlah barang yang dibeli : ";
    cin >> jmlh1;
    cout << "masukan harga barang 2 : Rp.";
    cin >> hrgbrg2;
    cout << "jumlah barang yang dibeli :";
    cin >> jmlh2;
    cout << "masukan harga baarsng 3 :Rp.";
    cin >> hrgbrg3;
    cout << "jumlah barang yang dibeli :";
    cin >> jmlh3;

    totalharga = hrgbrg1 * jmlh1 + hrgbrg2 * jmlh2 + hrgbrg3 * jmlh3;
    diskon = totalharga * 10 / 100;
    hargabersih = totalharga - diskon;

    cout<<"jumlahhargasebelumdiskon : Rp."<<totalharga<<endl;
    cout<<"jumlahdiskon             : Rp."<<diskon<<endl;
    cout<<"                          ============================ -"<<endl;
    cout<<"hargabersih                Rp."<<hargabersih<<endl;

}
