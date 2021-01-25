// 23 54 75
// 33 56 65


#include<stdio.h>

void main()
{
    // int arr[2][3] = {{3, 5, 3}, {5, 2, 76}};
    // int matrix[2][3] = {3, 4, 55, 76, 22, 0};
    int mat[100][100];
    int r, c, i, j;
    printf("Enter the dimension R C ");
    scanf("%d %d", &r, &c);
    for(i=0; i<r; i++)
    {   for(j=0; j<c; j++)
        {
            printf("Enter the element at [%d]X[%d]", i+1, j+1);
            scanf("%d", &mat[i][j]); 
        }
    }
    
    // output section
    printf("\nOutput Matrix \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }


}