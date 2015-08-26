#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
int a=2,b=-3,c=1,ax;
float x1,x2,xa;
xa=(sqrt((b*b)-(4*a*c)));
ax=2*a;
x1=(-b+xa)/ax;
x2=(-b-xa)/ax;
cout <<"x1 Adalah : "<< x1 << endl;
cout <<"x2 Adalah : "<< x2 << endl;
return(0);
}
