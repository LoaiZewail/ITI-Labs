#include <iostream>

using namespace std;

int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr;

    ptr=arr;

    cout << *ptr<< endl;

    ptr=ptr+3;

    cout << *ptr<< endl;
    return 0;
}
