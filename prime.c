// prime number 

#include<stdio.h>

void main()
{
    int num,a, b, count=0;
    printf("enter the range a and b:");
    scanf("%d %d", &a, &b);
for(num=a; num<=b; num++)
{
    for(int n=1; n<=num; n++ )
    {
        if(num%n==0)
        {
            count++;
        }
    }
    if(count ==2)
        printf("Prime number");
    else
        printf("Not prime number");
}
        
}