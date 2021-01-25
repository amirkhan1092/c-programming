// 23 54 75
// 33 56 65


#include<stdio.h>

void main()
{
    // int arr[2][3] = {{3, 5, 3}, {5, 2, 76}};
    // int matrix[2][3] = {3, 4, 55, 76, 22, 0};
    int mat[100][100], mat1[100][100], mat2[100][100];
    int r1, c1, r2, c2, i, j;
    printf("Enter the dimension of matrix1 R C");
    scanf("%d %d", &r1, &c1);
    for(i=0; i<r1; i++)
    {   for(j=0; j<c1; j++)
        {
            printf("Enter the element at [%d]X[%d]", i+1, j+1);
            scanf("%d", &mat1[i][j]); 
        }
    }
    printf("Enter the dimension of matrix2 R C");
    scanf("%d %d", &r2, &c2);
    for(i=0; i<r2; i++)
    {   for(j=0; j<c2; j++)
        {
            printf("Enter the element at [%d]X[%d]", i+1, j+1);
            scanf("%d", &mat2[i][j]); 
        }
    }
    // logic section
    if(r1 == r2 && c1 == c2)
    {

    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            mat[i][j] = mat1[i][j] + mat2[i][j];
       
    
    // output section
    printf("\nOutput Matrix \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
    }
    else
        printf("Not Valid dimension ");


}