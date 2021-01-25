
// 3 53 2
// 5 77 0
// matrix in C-Programming 
// 2D Array

#include<stdio.h>

void main()
{
    int arr[100][100];
    int i, j, r, c;
    printf("Enter the dimension RXC: ");
    scanf("%dX%d", &r, &c);
    for(i=0; i<r; i++)
    {   for(j=0; j<c; j++)
        {   
            printf("Enter the dimension [%d]X[%d]: ",i, j );
            scanf("%d", &arr[i][j]);
        }
    }

    // output section
    printf("\nOutput Matrix or 2D Array\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }

}


