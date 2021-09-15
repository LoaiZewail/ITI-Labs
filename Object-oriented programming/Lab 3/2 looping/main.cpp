#include <iostream>

using namespace std;

int main()
{
    int num;
    int min;

    cout << "Enter a number or any letter to finish : ";
    cin >> num;
    min=num;

    do {
        cout << "Enter a number or any letter to finish : ";
        if (scanf("%d",&num)==0)
        break;
        if (num < min)
            min=num;}
        while (1);
        cout << "Minimum number is : " << min;
    return 0;
}
