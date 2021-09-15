#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int number;

    printf ("Press on any button ! ");

    while((ch=getch())!= '\r')
{
    if (ch==0||ch==-32)
    {
      ch=getch();
      printf ("\nThis is an external key.\n") ;
    }
    else
        printf ("\nThis is a normal key.\n");
}
    return 0;
}
