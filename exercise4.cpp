#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int angka,a,b;
    while (angka!=9999){
        cout << "Masukkan Angka ( 9999 untuk stop ) :";
        cin >> angka;
        a=angka;
        if (a<b){
            b=a;
        }
    }
    cout << "Nilai terkecil adalah : " << b;
    return(0);
}
