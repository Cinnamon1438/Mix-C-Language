#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char kode, ukuran, merk[15];
    long harga=0;

    system("cls");
    cout<<"Kode Baju = ";cin>>kode;
        cout<<"Ukuran = ";cin>>ukuran;

    if (kode=='1')
    {
        strcpy(merk,"H & R");
        if (ukuran=='S' || ukuran=='s')
            harga=45000;
        else
            harga=60000;
    }
    else if (kode=='2')
    {
        strcpy(merk,"Adidas");
        if (ukuran=='S' || ukuran=='s')
            harga=65000;
        else
            harga=75000;
    }
    else
        cout<<"Salah Kode Baju"<<endl;

    cout<<"--------------------"<<endl;
    cout<<"Merk Baju : "<<merk<<endl;
    cout<<"Harga Baju : "<<harga<<endl;
    return 0;
}
