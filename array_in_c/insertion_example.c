// program to insert value at given position 

#include<stdio.h>
#define max 100
void main()
{
    int arr[max];
    int N, i, j;
    printf("Enter the number of elements :- ");
    scanf("%d", &N);
    int tmp;
    for ( i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    
    printf("\n user entered Array \n");
    for(i=0; i<N; i++)
        printf("%d ", arr[i]);

    int pos, ele;
    printf("Enter the element ");
    scanf("%d", &ele);

    printf("\nenter the position for insert ");
    scanf("%d", &pos);

    N++; // increment length by 1

    for(i=N-1; i>pos-1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1]=ele;


    printf("\n After insertion Array is \n");
    for(i=0; i<N; i++)
        printf("%d ", arr[i]);


    


}