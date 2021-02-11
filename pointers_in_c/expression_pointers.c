#include<stdio.h>

void main()
{
    int a, b;
    a = 20;
    b = 2;
    int *p1=&a, *p2=&b;
    printf("%d\n", *p1);
    

    printf("%d", *p1+1);
}