// C-Program decimal integer into binary 
#include<stdio.h>
void main()
{
    int num, re;
    int temp=1;
    int value;
    long long binary=0;
    printf("Enter the value ");
    scanf("%d", &value);
    int num1;
for(num=0; num<=value; num++)
{
    num1=num;
    binary = 0;
    temp = 1;
    while(num1>0)
    {
        re = num1%2;
        num1 = num1/2;
        binary = binary + temp*re;
        temp = temp*10;
    }
    printf("%4ld\n", binary);
}
}