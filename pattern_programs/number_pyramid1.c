// number triangle 

#include<stdio.h>

void main()
{
    int n, m;
    int lines;
    printf("Enter the numberof lines: ");
    scanf("%d", &lines);
    for(n=1; n<=lines; n++)
    {
        for(m=1; m<=n; m++)
            printf("%d", m);
        printf("\n");    
    }
}