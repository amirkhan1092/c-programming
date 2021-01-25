
// 3 53 2
// 5 77 0
// matrix in C-Programming 
// 2D Array

#include<stdio.h>

void main()
{
    int arr1[100][100], arr2[100][100], arr[100][100];
    int i, j, r1, c1, r2, c2;

    printf("Enter the dimension for matrix1 RXC: ");
    scanf("%dX%d", &r1, &c1);
    for(i=0; i<r1; i++)
    {   for(j=0; j<c1; j++)
        {   
            printf("Enter the dimension [%d]X[%d]: ",i, j );
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the dimension for matrix2 RXC: ");
    scanf("%dX%d", &r2, &c2);
    for(i=0; i<r2; i++)
    {   for(j=0; j<c2; j++)
        {   
            printf("Enter the dimension [%d]X[%d]: ",i, j );
            scanf("%d", &arr2[i][j]);
        }
    }
    // logic section 
    if(r1 == r2 && c1 == c2)
    {
        for(i=0; i<r1; i++)
            for(j=0; j<c1; j++)
                arr[i][j] = arr1[i][j] + arr2[i][j];
    // output section
    printf("\nMatrix1\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
            printf("%d\t", arr1[i][j]);
        printf("\n");
    }
    printf("\nMatrix2\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
            printf("%d\t", arr2[i][j]);
        printf("\n");
    }
    printf("\nOutput Sum of Matrix or 2D Array\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
    }
    else   
        printf("Dimension not valid for operation ");

}


