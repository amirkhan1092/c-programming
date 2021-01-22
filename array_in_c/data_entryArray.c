// read N numbers(elements) from user in an array 

#include<stdio.h>
#define max 10
void main()
{   
    int arr[max];
    int N, i;
    printf("Enter the number of elements ");
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {   printf("Enter the value at index %d:- ", i);
        scanf("%d", &arr[i]);
 
   }
   
    for(i=N-1; i>=0; i--)
        printf("%d ", arr[i]);

}


