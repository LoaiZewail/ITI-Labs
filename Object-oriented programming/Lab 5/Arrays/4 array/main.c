#include <stdio.h>

int main()
{

    int arr1[100], arr2[100], mergeArray[100*2];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i,j,temp;

    printf("Enter the size of first array : ");
    scanf("%d", &size1);

    printf("Enter elements in first array : \n");
    for(i=0; i<size1; i++)
    {
        printf ("Element[%d]: ",i+1);
        scanf("%d", &arr1[i]);
    }


    printf("\nEnter the size of second array : ");
    scanf("%d", &size2);

    printf("Enter elements in second array : \n");
    for(i=0; i<size2; i++)
    {
        printf ("Element[%d]: ",i+1);
        scanf("%d", &arr2[i]);
    }

        for(i=0;i<size1;i++)
        for(j=i+1;j<size1;j++)
        if (arr1[i]>arr1[j])
    {
        temp=arr1[i];
        arr1[i]=arr1[j];
        arr1[j]=temp;
    }


        for(i=0;i<size2;i++)
        for(j=i+1;j<size2;j++)
        if (arr2[i]>arr2[j])
    {
        temp=arr2[i];
        arr2[i]=arr2[j];
        arr2[j]=temp;
    }

    mergeSize = size1 + size2;

    index1 = 0;
    index2 = 0;

    while (index1 < size1 && index2 < size2)
    {
        if(arr1[index1] < arr2[index2])
            mergeArray[mergeIndex++] = arr1[index1++];
        else
            mergeArray[mergeIndex++] = arr2[index2++];
    }
    while(index1 < size1)
        mergeArray[mergeIndex++] = arr1[index1++];
    while(index2 < size2)
        mergeArray[mergeIndex++] = arr2[index2++];

    printf("\nArray merged in ascending order : ");
    for(i=0; i<mergeSize; i++)
    {
        printf("%d\t", mergeArray[i]);
    }
    return 0;
}
