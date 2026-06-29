#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    bool quit = false;

    while(!quit){

        system ("cls");

        int a;

        cout << "Masukan uang anda : ";cin >> a;

        if(a == 2000){
            cout<<"Uang anda cukup";
        }
        else if(a <= 2000){
            cout<<"Uang anda kurang sebanyak " << (2000 - a);
        }
        else if(a >= 2000){
            cout<<"Anda mendapat kembalian sebanyak " << (a - 2000);
        }

        char n;
        cout<<"\nApakah ingin mengulang [Y/N] : ";cin>>n;

        if(n == 'n')
            quit = true;
    }

    return 0;
}
