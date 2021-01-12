#include<stdio.h>

void main()
{
    int n, m, lines, k=0;
    lines = 10;
    for(n=1; n<=lines; n++)
    {
        for(m=1; m<=lines-n; m++)
            printf(" ");

        while(k != (2*n-1))
        {   if(k==0 || k == 2*n-2 || n == 10)
                printf("*");
            else
                printf(" ");    
            k++;
        }
        k=0;        

        printf("\n");
    }
}