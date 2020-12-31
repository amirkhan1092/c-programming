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


step1: start
step2: declare the number n
step3: read the number n
step4: init count=0
step5: while n > 0
            n /= 10
            count++
step6: display count 
step7: stop           



