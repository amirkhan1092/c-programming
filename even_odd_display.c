// display the even number between a and b

#include<stdio.h>

void main()
{
    int a, b;
    printf("Enter the range a and b ");
    scanf("%d %d", &a, &b);
    for(int num=a; num<=b; num++)
    {
    if(num%2==0)
        printf("%d\n", num);
    }
}