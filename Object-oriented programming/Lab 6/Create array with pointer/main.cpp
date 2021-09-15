#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int *ptr;
    int *start;

    ptr = (int*)malloc(7*sizeof(int));
    start=ptr;

    for(int i=0;i<7;i++)
    *ptr++=(i+1)*10;

    ptr=start;

    for (int i=0;i<7;i++)
        cout << *ptr++ << endl;
}
