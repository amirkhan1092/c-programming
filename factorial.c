#include<stdio.h>
#include<conio.h>

void main()
{
    int num, fact, temp;
    printf("Enter the positive integer number ");
    scanf("%d",&num);
    fact = 1;
    temp = num;
    while(num>0)
    {
        fact = fact*num;
        num--;
    }
    printf("factorial of number %d is %d",temp, fact);
}