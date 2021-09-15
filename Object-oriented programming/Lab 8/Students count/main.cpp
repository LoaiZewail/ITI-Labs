#include <iostream>

using namespace std;

class student

{
    int code;
public:
    static int objectcount;
    student()
    {
        objectcount++;
    }
};

int student::objectcount=0;

int main()
{
    student obj1;
    student obj2;
    student obj3;

    cout << student::objectcount << endl;
    return 0;
}
