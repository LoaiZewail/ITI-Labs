#include <iostream>

using namespace std;

int main()
{
    int arr[100],n;
    int i,temp;
    bool sorted;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i=0;i<n;i++)
    {
        cout << "Enter data[" << i+1 << "] : ";
        cin >> arr[i];
    }

    // bubble sorting

    do
    {
        sorted=true;
        for (i=0;i<n-1;i++)
            if (arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            sorted=false;
        }
    }while(!sorted);


        cout << "Data after sorting : " << endl;

        for (i=0;i<n;i++)
            cout << arr[i] << endl;
    return 0;
}
