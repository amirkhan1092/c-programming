#include<stdio.h>
#define S 5


void main()
{
    

    int marks[S];
    int i;

    for(i=0; i<S; i++ )
    {
        printf("Enter value at index %d :", i);
        scanf("%d", &marks[i]);
    }
    
   printf("Array :-\n");
    for(i=0; i<S; i++)
        if(i==0)
            printf("[%d, ", marks[i]);
        else if(i == S-1)
            printf("%d]", marks[i]);    
        else    
            printf("%d, ", marks[i]);
    printf("\nDuplicates Items in array \n");
    for(i=0; i<S; i++)
    {
        
        for(int j=i+1; j<S; j++)
        {
            if(marks[i] == marks[j])
            {
                printf("%d\t", marks[i]);
            }
        }
    }


}









    
    // for (int i = 0; i < 5; i++)
    // {   printf("Enter marks at index %d:-", i);
    //     scanf("%d", &marks[i]);
    // }

    // // marks[0] = 10;
    // // marks[1] = 11;
    // // marks[2] = 13;
    // // marks[3] = 10;
    // // marks[4] = 9;
    // for(int i=0; i<5; i++)
    // {
    // printf("value at index %d is %d\n", i, marks[i]);
    // }


