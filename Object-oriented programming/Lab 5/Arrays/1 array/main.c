#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],n;
    printf ( "Enter a size of array < 100: ");
    scanf ("%d", &n);

    for(int i=0; i<n; i++)
    {
        printf ("Enter element [%d]: " ,i+1);
        scanf ("%d", &arr[i]);
    }

    printf ("Reversed Array is: \n");

    printf ("[");

    for(int i=n-1; i>=0; i--)
        {
        printf (" %d ", arr[i]);
        }
        printf ("]");
    return 0;
}
