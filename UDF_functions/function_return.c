#include<stdio.h>

int max(int, int);

void main()
{
    int n1, n2;
    n1 = 29;
    n2 = 20;
    int m;

    m = max(n1, n2);

    printf("Larger number is %d", m);
}

int max(int a, int b)
{
    a>b?return(a):return(b);
}