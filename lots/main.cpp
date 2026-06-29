#include <iostream>

using namespace std;

int main()
{
    bool quit = false;

    while(!quit){

        int a;

        cout<<"Masukan nilai : ";cin>>a;
        if(a%2==0){
            cout<< a <<" adalah bilangan genap";
        }
        else if(a%2==1){
            cout<< a <<" adalah bilangan ganjil";
        }

        char n;

        cout<<"Apakah ingin mengulang [Y/N] : ";cin>>n;

        if(n == 'n'){
            quit = true
        }

        }

    return 0;

}
