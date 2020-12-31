// check the given number is prime or not 

#include<stdio.h>

void main()
{
    int num;
    int count=0;
    int a, b;
    printf("Enter the range a&b");
    scanf("%d %d", &a, &b);

    for(num=a; num<=b; num++)
    {   
    count =0;
    for(int i=1; i<=num; i++)
    {
        if(num%i == 0)
            count++;
    }
    if(count==2)
        printf("Prime number %d\n", num);   
    }
}
