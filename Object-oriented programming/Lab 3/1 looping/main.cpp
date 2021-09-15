#include <iostream>

using namespace std;

int main()
{

    int num;
    int max;

    cout << "Enter a number or any letter to finish : ";
    cin >> num;
    max=num;

    do {
        cout << "Enter a number or any letter to finish : ";
        if (scanf("%d",&num)==0)
        break;
        if (num > max)
            max=num;}
        while (1);
        cout << "Maximum number is : " << max;

    return 0;
}
