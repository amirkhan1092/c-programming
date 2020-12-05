// number weird or not weird 

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n%2)
        printf("Weird");
    else
    {
        if(n>=2 && n<=5)
            printf("Not Weird");
        else if(n>=6 && n<=20)
            printf("Weird");
        else if(n>20)
            printf("Not Weird");
    }
    return 0;
    
}