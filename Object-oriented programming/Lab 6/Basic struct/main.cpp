#include <iostream>

using namespace std;
struct person
{
    string name;
    int age;
    float salary;
};
int main()
{
    struct person mydata;
    mydata.name="Bo2loz";
    mydata.age=25;
    mydata.salary=5500.55;

    cout << "Name : " << mydata.name << endl;
    cout << "Age : " << mydata.age << endl;
    cout << "Salary : " << mydata.salary << endl;
    return 0;
}
