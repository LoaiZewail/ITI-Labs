#include <iostream>

using namespace std;

int calcNumber(int num);
int num,z;

int main()
{

    cout << "Enter the number you want to calculate !" << endl;
    cin >> num;

    z=calcNumber(num);

    cout << "Result is : " << z;

    return 0;
}

int calcNumber(int num)
{
    if(num==1)
        return 1;
    else
        return (num+calcNumber(num-1));
}

