#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    float a,b,c,d,x1,x2;
    cout << "Enter a \n";
    cin >> a;
    cout << "Enter b \n";
    cin >> b;
    cout << "Enter c \n";
    cin >> c;
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    return 0;
}
