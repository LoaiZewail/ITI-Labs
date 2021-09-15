#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int data[100];
   char oper;
   int n,res;
   int i;

   cout << "Enter data < 100 : ";
   cin >> n;

   for (i=0;i<n;i++)
   {
       cout << "data["<<i+1<<"] : ";
       cin >> data[i];
   }

       cout << "Enter operator (+,*) : ";
       cin >> oper;

       switch (oper)
       {
       case '+' :
        res=0;
        for(i=0;i<n;i++)
            res+=data[i];
       break;
       case '*' :
        res=1;
        for(i=0;i<n;i++)
            res*=data[i];
       break;
       default:
        exit(0);
       }
       cout << "The result of the operation "<< oper << " is : "<< res << endl;
    return 0;
}
