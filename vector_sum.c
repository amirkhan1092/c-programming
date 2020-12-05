#include<stdio.h>

void main()
{
    int n;
    int sum=0;
    scanf("%d", &n);
 
    while (n>0)
    {
        sum += n%10;
        n /= 10;

    }
    printf("Sum is %d", sum);
}