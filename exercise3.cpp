#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Masukkan Sisi 1 : ";
    cin >> a;
    cout << "Masukkan Sisi 2 : ";
    cin >> b;
    cout << "Masukkan Sisi 3 : ";
    cin >> c;

    if (a==c&&b!=c||a==b&&b!=c){
        cout << "segitiga sama kaki";
    }

    if (a!=b&&b!=c&&a!=c){
        cout << "segitiga sembarang";
    }

    if (a==b&&b==c){
        cout << "segitia sama sisi";
    }
    return(0);
}
