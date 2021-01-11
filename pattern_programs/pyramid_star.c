// Write a C-Program to display the Pyramid using * symbols 

#include<stdio.h>
void main()
{
    int lines, m, n;
    printf("Enter the number of lines ");
    scanf("%d", &lines);
    for(n=1; n<lines; n++)
    {
        for ( m = 1; m < lines-n; m++)
        {
            printf(" ");
        }
        printf("*\n");
        
    }
}
