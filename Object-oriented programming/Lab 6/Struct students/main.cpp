#include <iostream>

using namespace std;

typedef struct data
{
    int code;
    string name;
    int marks[5];
    float total;
}student;
int main()
{
    int size;
    int i,j;
    int sum;
    student arr[100];
    cout << "Enter the number of students : ";
    cin >> size;

    for (i=0;i<size;i++)
    {
        arr[i].code=i+1;
        cout << "Student [" << arr[i].code << "]" << endl;
        cout << "Name : ";
        cin >> arr[i].name;
        fflush(stdin);
        sum=0;
        for(j=0;j<5;j++)
        {
            cout << "Mark [" << j+1 << "] : ";
            cin >> arr[i].marks[j];
            sum = sum +arr[i].marks[j];
        }
        arr[i].total = (float)sum;
    }

        for(i=0;i<size;i++)
        for(j=i+1;j<size;j++)
        if (arr[i].total<arr[j].total)
    {
        student temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    cout << "Student records based on total marks in descending order : " << endl;
    for(i=0;i<size;i++)
        cout <<  arr[i].name << " : " << arr[i].total << endl;
    return 0;
}
