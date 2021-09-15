#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int data[100];
   int key,n,pos;
   int i;

   cout << "Enter data < 100 : ";
   cin >> n;

   for (i=0;i<n;i++)
   {
       cout << "data["<<i+1<<"] : ";
       cin >> data[i];
   }

    cout << "What are you searching for ?" << endl;
    cin >> key;

    pos=-1;

    int lower,upper,mid;
    lower=0;
    upper=n-1;

    do{
        mid=(lower+upper)/2;
        if(key==data[mid])
        {
         pos=mid;
         break;
        }
        else
        if (key>data[mid])
            lower=mid+1;
            else
            upper=mid-1;
        }
    while(lower<=upper);
        if (pos==-1)
            cout << key << " is not found."<< endl;
        else
            cout << key << " is found at data ["<< pos << "]" << endl;
        return 0;
}
