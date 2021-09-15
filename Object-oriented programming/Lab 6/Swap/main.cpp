#include <iostream>

using namespace std;

void  swap (int &a,int &b);

int main()
{
    int x =10;
    int y =20;

    cout << "x before = " << x << endl;
    cout << "y before = " << y << endl;
    swap(x,y); // call by reference (3mlna &) 7tt el pointer de w kda.
    cout << "x after = " << x << endl;
    cout << "y after = " << y << endl;
    return 0;
}

void  swap (int &a,int &b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
}
