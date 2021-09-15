#include <stdio.h>
#include <stdlib.h>

int main()
{
   int data[100];
   int n,res;
   int i;

   printf ("Enter data < 100 : ");
   scanf ("%d",&n);

   for (i=0;i<n;i++)
   {
       printf ("data[%d] : " , i+1);
       scanf ("%d",&data[i]);
   }

        res=0;
        for(i=0;i<n;i++)
        res+=data[i];

       printf ("The result is : %d" , res   );
    return 0;
}
