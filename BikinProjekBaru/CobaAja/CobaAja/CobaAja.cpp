// CobaAja.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {

	string nama;
	int nilai[3];

	cout << "Nama Siswa \t: ";
	cin >> nama;
	
	cout << "Nilai Pertandingan I \t: ";
	cin >> nilai[0];

	cout << "Nilai Pertandingan II \t: ";
	cin >> nilai[1];
	
	cout << "Nilai Pertandingan III \t: ";
	cin >> nilai[2];

	cout << "Siswa yang bernama " << nama;

	int nr = (nilai[0] + nilai[1] + nilai[2]) / 3;
	cout << "Memperoleh nilai rata - rata " << nr;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
