#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

char kope[4], napes[30], lagi;
int kelas, harga, jumlah, totbay, x, a;

int main()
{
    bool quit = false;

    while (!quit)
    {
        system("cls");
        cout<<"------------------------------\n";
        cout<<"\t\t\tProgram Tiket Pesawat\n";
        cout<<"\t\t\t   Jakarta - Malaysia\n";
        cout<<"------------------------------\n";

        cout<<"Masukan Kode Pesawat [MPT/GRD/BTV] = "; cin>>kope;
        cout<<"Kelas Pesawat = \n";
        cout<<"\t 1.Executive";
        cout<<"\t 2.Bisnis";
        cout<<"\t 3.Ekonomi\n\n";
        cout<<"Masukkan Kelas [1/2/3] = ";cin>>kelas;

        if (strcmp(kope,"mpt")==0)
        {
            strcpy(napes,"Merpati");

            if (kelas==1)
            {
                harga=1500000;
            }
            else if (kelas==2)
            {
                harga=900000;
            }
            else if (kelas==3)
            {
                harga=500000;
            }
            else
            {
                harga=0;
            }
        }

        if (strcmp(kope,"grd")==0)
        {
            strcpy(napes,"Garuda");

            if (kelas==1)
            {
                harga=1200000;
            }
            else if (kelas==2)
            {
                harga=800000;
            }
            else if (kelas==3)
            {
                harga=400000;
            }
            else
            {
                harga=0;
            }
        }

        if (strcmp(kope,"btv")==0)
        {
            strcpy(napes,"Batavia");

            if (kelas==1)
            {
                harga=1000000;
            }
            else if (kelas==2)
            {
                harga=900000;
            }
            else if (kelas==3)
            {
                harga=500000;
            }
            else
            {
                harga=0;
            }
        }

        else
        {
            strcpy(napes,"Kode yang anda masukkan salah");
            if (kelas==0)
            {
                harga=0;
            }
        }
        cout << endl;
        cout << "------------------------------\n";
        cout << "Nama Pesawat = " << napes << endl;
        cout << "Harga Tiket = " << harga << endl;
        cout << "Jumlah Tiket = "; cin>>jumlah;

        totbay = jumlah * harga;
        cout << "Total Bayar = " << totbay << endl;
        cout << endl;

        cout << "Mau Melakukan Transaksi Lagi [Y/T] = "; cin>>lagi;

        if (tolower(lagi) != 'y')
            quit=true;

        else
            cout<<"TERIMAKASIH\n";

    }

    return 0;
}
