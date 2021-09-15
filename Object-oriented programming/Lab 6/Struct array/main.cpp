#include <iostream>

using namespace std;

typedef struct data
{
    int code;
    string name;
    int marks[5];
    float gpa;
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
            cout << "Mark [" << j+1 << "]" << endl;
            cin >> arr[i].marks[j];
            sum = sum +arr[i].marks[j];
        }
        arr[i].gpa = (float)sum/5;
    }
    for(i=0;i<size;i++)
        cout << arr[i].code << " : " << arr[i].name << "\t" << arr[i].gpa << endl;
    return 0;
}
