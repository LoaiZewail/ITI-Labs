#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>

using namespace std;

void gotoxy( int column, int line );

int main()
{
    int n;
    int val;
    int row,col;
    int k;

    cout<<"Enter an odd size : ";
    cin>> n;

    system("cls");
    val=1;
    row=1;
    col=(n+1)/2;

    do
    {
        gotoxy(col*5,row);
        cout<<setw(5)<<val;
        if(val%n==0)
            row++;
        else
        {
            row--;
            col--;
            if(row==0) row=n;
            if(col==0) col=n;
        }
        val++;
    for (k=1;k<70000000;k++);
    }
    while(val<=n*n);
    return 0;
}

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(
        GetStdHandle( STD_OUTPUT_HANDLE  ),
        coord
        );
}
