#include<stdio.h>
#include<math.h>
void main()
{
    int num, reverse=0;
    int tmp, u;
    num = 153;

    while (num!=0)
    {
        tmp=num%10;
        u = round(pow(tmp, 3));
        printf("%d ", u);
        reverse += u;
        num /=10;
    }
    printf("\n%d ", reverse);
    

}