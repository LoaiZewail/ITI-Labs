#include <iostream>

using namespace std;

int main()
{
    int num;
    int counter=0;
    int sum=0;
    int average;

    cout << "Enter a number or any letter to finish : ";

    while (scanf("%d",&num)==1)
        {
            cout << "Enter a number or any letter to finish : ";

            sum+=num;
            counter++;
        }

        average=sum/counter;

        cout << "Average is : " << average;

    return 0;
}
