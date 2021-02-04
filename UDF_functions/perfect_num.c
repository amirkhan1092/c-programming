#include<stdio.h>
int perfect(int, int);
void main()
{
    int a, b;
    a = 5;
    b = 30;
    int i;
    int ff;
    for(i = a; i<=b; i++)
    {
        ff = perfect(i);
        if(ff)
            printf("%d ", i);
    }
     
}