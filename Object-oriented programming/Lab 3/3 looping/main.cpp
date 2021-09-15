#include <iostream>

using namespace std;

int main()
{
    float num;
    float min;
    float max;
    float range;

    cout << "Enter a number or any letter to finish : ";

    cin >> num;
    min=num;
    max=num;

    do {
        cout << "Enter a number or any letter to finish : ";
        if (scanf("%f",&num)==0)
        break;
        if (num < min)
            min=num;
        if (num > max)
            max=num;
            }
        while (1);

        cout << "Minimum number is : " << min << endl;
        cout << "Maximum number is : " << max << endl;

        range = max - min;

        cout << "Range of (Maximum - Minimum) is : " << range << endl;
    return 0;
}
