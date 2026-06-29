#include <iostream>

using namespace std;

int main()
{
    bool quit = false;


    while(!quit)
    {
        int a;

        cout << "Masukan angka : ";cin>>a;

        while(a <= 5)
        {
            cout<<(++a);
        }

        return 0;

        char n;
        cout << "Apakah ingin mengulang [Y/N] : "; cin>> n;

        if(n == 'n')
            quit = true;
    }


    return 0;
}
