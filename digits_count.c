// program to count the digits of given integer value

#include<stdio.h>

void main()
{
    int num, count=0;
    printf("enter the number ");
    scanf("%d", &num);
    if(num==0)
        count++;
    while(num != 0)
    {
        num = num/10;
        ++count;
    }
    printf("%d", count);
}


