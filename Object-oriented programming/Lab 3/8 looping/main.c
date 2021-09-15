#include <stdio.h>
#include <stdlib.h>





int main()
{
    char ch;
    int counter=0;
    int number;

    printf ("Please enter a number : ");
    while ((ch=getch()) != '\r')
    {
        switch (ch)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            if (counter<5)
            {
             putch(ch);
             counter++;
            }

            break;
        case 8 :
        putch(8);
        putch(' ');
        putch(8);
        counter--;
        }

    }
    return 0;
}
