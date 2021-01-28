// multiplication of two matrix 

#include<stdio.h>

void main()
{   // input section 
    int arr1[100][100], arr2[100][100], out[100][100];
    int r1, c1, r2, c2, i, j;

    printf("Enter the dimension of matrix1 [R]X[C]: ");
    scanf("%dX%d", &r1, &c1);

    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
        {
            printf("Enter element at [%d]X[%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    printf("Enter the dimension of matrix2 [R]X[C]: ");
    scanf("%dX%d", &r2, &c2);

    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
        {
            printf("Enter element at [%d]X[%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }    

    // logic section 
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
            out[i][j] = 0;
    if(c1 == r2)
    {        
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
           for(int k=0; k<c1; k++)
                out[i][j] += arr1[i][k] * arr2[k][j];
       
  

    // output section 
    printf("\nMatrix1\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
            printf("%d ", arr1[i][j]);
        printf("\n");    
    }
    printf("\nMatrix2\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
            printf("%d ", arr2[i][j]);
        printf("\n");    
    }
    printf("\nOutput Matrix \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
            printf("%d ", out[i][j]);
        printf("\n");    
    }

    }
    else  
        printf("\nNot valid dimensions ");






}