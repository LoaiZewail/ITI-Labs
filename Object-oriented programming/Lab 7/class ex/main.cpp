#include <iostream>

using namespace std;

    class Employee
    {

        private:
            float salary;

        public:

            int code;
            string name;

            void display_info()
            {
                cout << "Code : " << code <<"\n" << "Name : " << name << "\n" << "Salary : "<< salary << endl;
            }

            float net_salary(float tax_per)
            {
                return (salary - salary*tax_per);
            }

            setsalary(float s)
            {
            if (s>0)
                salary=s;
            else
                cout <<"Wrong input !" << endl;
            }

            getsalary(){
                return salary;
            }
    };

int main()
{
    Employee emp1,emp2;
    emp1.code=100;
    emp1.name="joo";
    emp1.setsalary(500);
    emp1.display_info();

    cout << "Net salary is : " << emp1.net_salary(0.1)<< endl;

    return 0;
}
