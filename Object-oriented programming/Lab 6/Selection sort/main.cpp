#include <iostream>

using namespace std;

int main()
{
    int arr[100],n;
    int i,j,temp;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i=0;i<n;i++)
    {
        cout << "Enter data[" << i+1 << "] : ";
        cin >> arr[i];
    }
    // selection sort

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        if (arr[i]>arr[j])
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
        cout << "Data after sorting : " << endl;

        for (i=0;i<n;i++)
            cout << arr[i] << endl;
    return 0;
}
