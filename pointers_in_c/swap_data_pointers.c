#include<stdio.h>
void swap(int*, int*);
void main()
{
    int a, b;
    a = 29;
    b = 38;

    swap(&a, &b);

    
    printf("Value of a %d", a);
    printf("Value of b %d", b);
}

void swap(int *x1, int *x2)
{
    int tmp;
    tmp = *x1;
    *x1 = *x2;
    *x2 = tmp;
}