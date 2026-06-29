#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int pilihan;
	double alas, tinggi, segi3;
	double panjang, lebar, lpp;
	double jari2, luas_lingkaran;
	
	cout << "Masukkan Pilihan" << endl;
	cout << "1. Menghitung Luas Segitiga" << endl;
	cout << "2. Menghitung Luas Persegi Panjang" << endl;
	cout << "3. Menghitung Luas Lingkaran" << endl <<endl;
	cout << "Pilih (1/2/3) : ";
	cin >> pilihan;
	cout << endl;

	if (pilihan == 1)
	{
		cout << "\t Menghitung Luas Segitiga \n";
		cout << "Masukkan Alas \t: ";
		cin >> alas;
		cout << "Masukkan Tinggi : ";
		cin >> tinggi; 
		segi3=0.5*alas*tinggi;
		cout << "Luas Segitiga \t= " << segi3 << endl;
	}
	else if (pilihan == 2)
	{
		cout << "\t Menghitung Luas Persegi Panjang \n";
		cout << "Masukkan Panjang : ";
		cin >> panjang;
		cout << "Masukkan Lebar   : ";
		cin >> lebar;
		lpp=panjang*lebar;
		cout << "Luas Persegi Panjang = " << lpp << endl;
	}
	else if (pilihan == 3)
	{
		cout << "\t Menghitung Luas Lingkaran \n";
		cout << "Masukkan Jari-Jari : ";
		cin >> jari2;
		luas_lingkaran=3.14*(jari2*jari2);
		cout << "Luas Lingkaran = "<< luas_lingkaran << endl;
	}
	else
	{
		cout << "Maaf, Pilihan tidak ada" << endl;
	}

	getch();
}
