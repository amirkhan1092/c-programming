// program to insert value at given position 

#include<stdio.h>
#define max 100
void main()
{
    int arr[max];
    int N, i, j, ele, pos;
    printf("Enter the number of elements :- ");
    scanf("%d", &N);

    for ( i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element ");
    scanf("%d", &ele);
    printf("enter the position ");
    scanf("%d",&pos);

    N++;
    for(i=N-1; i>pos-1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = ele;


    
    
    // output section 
    printf("\nOutput array after insertion\n");
    for(i=0; i<N; i++)
        printf("%d ", arr[i]);

    


}