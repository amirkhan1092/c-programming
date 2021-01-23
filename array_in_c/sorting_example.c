// bubble sort


#include<stdio.h>

void main()
{
    int temp, i;
    int arr[] = {2, 42, 0, 1, 43, 23, 90, 8};
    int size = sizeof arr/ sizeof arr[0];
    printf("\nInput array is\n");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);

    for(int k=0; k<size; k++)
    {
    
    for(i=0; i<size-1-k; i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
           
        }
    }
    }

    printf("\nOutput array is\n ");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);


}