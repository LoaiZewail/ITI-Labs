#include <iostream>

using namespace std;

int a,b,Max;

int max_two(int a, int b);

int main()
{

    cout << "Enter the first number : ";
    cin >> a;

    cout << "Enter the second number : ";
    cin >> b;

    Max = max_two(a,b);

    cout << "Maximum number is : " << Max << endl;

    return 0;
}

int max_two(int a,int b){

    if (a>b)
        return a;
    else
        return b;
}
