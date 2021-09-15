#include <iostream>

using namespace std;

int main()
{
    int i;
    bool found;
    int n;
    int r,c;

    cout << "Enter the number of queens : ";
    cin >> n;

    bool row[n+1];
    bool d1[2*n];
    bool d2[2*n];

    int col[n+1];

    for(i=1;i<=n;i++) row[i]=true;
    for(i=1;i<=2*n-1;i++)
    {
        d1[i]=true;
        d2[i]=true;
    }

    r=1;
    c=1;

    do
    {
        // find row r in col c

        found=false;
        while ((r<=n) && (found == false))
        {
            if (row[r]==true && d1[r+c-1]==true &&d2[n-c+r]==true)//if (cell_is_ok(r,c))
            {
                row[r]=false;
                d1[r+c-1]=false;
                d2[n-c+r]=false;
                col[c]=r;
                found=true;
            }
            else
                r++;
        }

        if (found==true)
        {
            c++;
            r=1;
        }
        else //backtracking
        {
            c--;
            if (c>0)
            {
                r=col[c];
                row[r]=true;
                d1[r+c-1]=true;
                d2[n-c+r]=true;
                r++;
            }
        }

    }while (c>=1 && c<=n);

    if (c==0)
        cout << "No solution." << endl;
    else
    {
       cout << "The solution is : " << endl;
       // print solution
       for(i=1;i<=n;i++)
        cout << "Put queen number " << i << " .. "<< " in row number " << col[i] <<endl;
    }
    return 0;
}
