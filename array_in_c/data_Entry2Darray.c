#include<stdio.h>
#define row 2
#define column 3
void main()
{
    // int arr[row][column];
    int r, c;
    // for(r=0; r<row; r++)
    // {
    //     for ( c = 0; c < column; c++)
    //     {
    //         printf("Enter the matrix element [%d]x[%d]", r, c);
    //         scanf("%d", &arr[r][c]); 
    //     }     
    // }

    int arr[2][] = {
        {3, 43, 2},
        {3, 0, 0}
    };
    for(r=0; r<row; r++)
    {
        for ( c = 0; c < column; c++)  
            printf("%d ", arr[r][c]);
        printf("\n");    
    } 
}



