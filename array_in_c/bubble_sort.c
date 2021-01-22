
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
    
    for(i = 0; i < N-1; i++)
    {
        for(j=0; j<N-1-i;j++ )
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;

            }

        }

    }
    printf("\nSorted elements are \n");
    for(i=0; i<N; i++)
        printf("%d ", arr[i]);

    

}