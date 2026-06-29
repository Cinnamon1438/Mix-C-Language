#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a, b, c, d, e, total, hasil;
	
	cout << "Masukan nilai pertama : ";
	cin >> a;
	
	cout << "Masukan nilai kedua   : ";
	cin >> b;
	
	cout << "Masukan nilai ketiga  : ";
	cin >> c;
	
	cout << "Masukan nilai keempat : ";
	cin >> d;
	
	cout << "Masukan nilai kelima  : ";
	cin >> e;
	
	total = a + b + c + d + e;
	
	hasil = total/5;
	
	cout << "Jumlah rata-rata dari lima bilangan tersebut adalah : " << hasil << endl;
	
	return 0;
}

