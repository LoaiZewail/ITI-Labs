#include <stdio.h>

int main()
{

    int arr[] = {1, 2, 3, 5, 2, 5, 8, 8, 3};

    int count=0;

    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Duplicate elements in the array: \n");

    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if(arr[i] == arr[j])
                {
                printf("%d\n", arr[j]);
                count++;
                }
        }
    }
    printf("Number of duplicated elements is : %d",count);
    return 0;
}
