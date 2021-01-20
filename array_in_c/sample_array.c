#include<stdio.h>
#define N 5
void main()
{
    int marks[N];
    int i;

    for(i=0; i<N; i++)
    {
        printf("Enter the elements at index %d ", i);
        scanf("%d", &marks[i]);
    }
    printf("\n\nArray is:-\n");
    for(i=N-1; i>=0; i--)
    {
        if(i==N-1)
            printf("{%d, ", marks[i]);
        else if(i==0)
            printf("%d}", marks[i]);    
        else    
            printf("%d, ", marks[i]);
    }    

}
// Array is:-
// 1 4 2 7 45