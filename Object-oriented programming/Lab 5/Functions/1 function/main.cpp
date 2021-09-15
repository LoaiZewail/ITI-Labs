#include <iostream>
#include <cmath>

using namespace std;

int powerFunction (int num, int power);

int main()
{

    int num,power,result;

    result = powerFunction(6,5);

    cout << "Result of 6^5 = " << result << endl;

    return 0;
}

int powerFunction (int num,int power)
{
    return pow(num,power);
}
