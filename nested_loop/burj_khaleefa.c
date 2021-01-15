#include<stdio.h>
void main()
{
    int num;
    int re;
    long long binary=0;
    int temp=1;
    int lastnum;
    int num1;
    printf("enter the value ");
    scanf("%d", &lastnum);
    for(num=0; num<=lastnum; num++)
    {
    binary=0;
    temp=1;
    num1=num;
    while(num1>0)
    {
        re = num1%2;
        binary = binary + re*temp;
        num1 /= 2;
        temp = temp*10;
    }
    printf("%ld\n", binary);
    }
}