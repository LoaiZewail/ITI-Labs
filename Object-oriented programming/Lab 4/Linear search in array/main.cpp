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

    for(i=0;i<n;i++)
        if (key==data[i])
        {
        pos=i;
        break;
        }
        if (pos==-1)
            cout << key << " is not found."<< endl;
        else
            cout << key << " is found at data ["<< pos << "]" << endl;
        return 0;
}
