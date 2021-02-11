#include<stdio.h>
void change(int*);
void main()
{
    int num;
    num = 23;
    change(&num);
    printf("Value of number is %d", num);
}

void change(int *x)
{
    *x = 0;
   
}