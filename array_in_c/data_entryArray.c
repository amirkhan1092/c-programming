// data store in a array

#include<stdio.h>
#define S 5

void main()
{
    int marks[S];
    int i;
    for(i=0; i<S; i++)
    {
    printf("enter the value at index %d: ", i);
    scanf("%d", &marks[i]);
    }
    printf("\n\nArray is:\n");
    // for(i=S-1; i>=0; i--)
    //     if(i==S-1)
    //         printf("{%d, ", marks[i]);
    //     else if(i == 0)
    //         printf("%d}", marks[i]);
    //     else        
    //         printf("%d, ", marks[i]);
    for ( i = S-1; i>=0; i--)
    {
        printf("%d ", marks[i]);
    }
    

}


