#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
	system("cls");
	
	const float phi = 3.14;
	float ta, tt, ka, tk;
	double vt, vk;
	double hasil, liter;
	
	cout << "Masukkan Nilai Alas Tabung(Ember)   : "; cin>>ta;
	cout << "Masukkan Nilai Tinggi Tabung(Ember) : "; cin>>tt;
	cout << "Masukkan Nilai Alas Kerucut   : "; cin>>ka;
	cout << "Masukkan Nilai Tinggi Kerucut : "; cin>>tk;
	
	vt = phi * ta * ta * tt;
	
	vk = phi/3 * ka * ka * tk;
	
	hasil = vt - vk;
	
	liter = hasil/1000;
	
	cout << "===============================================\n" ;
	cout << "Volume Tabung          : " << vt << "\n";
	cout << "Volume Kerucut         : " << vk << "\n";
	cout << "Jumlah Air yang tumpah : " << liter << " L";
	
	return 0;
}

