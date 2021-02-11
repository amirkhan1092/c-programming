7983278#include<stdio.h>
void change(void);
void main()
{
    int a;
    a = 20;
    change();
    printf("Value of a: %d", a);
}

void change(void)
{
    int a;
    a = 0;
}

