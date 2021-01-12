#include<stdio.h>
void main()
{
    int num, num2, temp, rem;
    long binary=0;
    printf("Enter the value in decimal integer: ");
    scanf("%d", &num);

    for(int i=0; i<=num; i++)
    {
    binary = 0;
    temp = 1;  
    num2 = i;  
    while(num2>0)
    {
        rem = num2%2;
        num2 /= 2;
        binary += temp*rem;
        // printf("%d", binary);
        temp *= 10;
    }
    printf("%4ld\n", binary);
    }
  
}