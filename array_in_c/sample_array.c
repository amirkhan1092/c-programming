#include<stdio.h>
#define max 100

void main()
{
    int arr[max];
    int N, i;
    printf("Enter the number of elements ");
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
        printf("enter the value at index %d:- ", i);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<N; i++)
        printf("%d ",arr[i]);
    
   
}


