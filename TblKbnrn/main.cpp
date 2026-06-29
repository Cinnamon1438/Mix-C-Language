#include <iostream>
#include <cstdio>
#include <cstdlib>
#define TRUE 1
#define FALSE 0

typedef int boolean;//alias tipe data int sebagai boolean

using namespace std;

int main()
{
    boolean p,q,r;
    printf("Tabel Kebenaran\n");
    printf("|P|Q|R|P AND Q AND R|P OR Q OR R|\n");
    printf("==========================================\n");
    for(p=TRUE;p>=FALSE;p--){
        for(q=TRUE;q>=FALSE;q--){
            for(r=TRUE;r>=FALSE;r--){
                printf("|%d|%d|%d|%7d      |%6d     |\n",p,q,r,p&&q&&r,p||q||r);
            }
        }
    }
    printf("==========================================\n");

    return 0;
}
