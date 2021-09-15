#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter a number \n";
    cin >> a;
    if (a>0)
        cout << " The number is Positive";
    else if (a==0)
        cout << "The number is Zero";
    else
        cout << "The number is Negative";
    return 0;
}
