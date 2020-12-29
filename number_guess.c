#include<stdio.h>

void main()
{
    int n, num=8;
    int count=0;
    while(1)
    {
    printf("\nGuess the number between 1 to 10: ");
    scanf("%d", &n);
    count++;
    if(n < num )
        printf("\nsmaller");
    else if(n > num)
        printf("\nlarger");
    else
    {
        printf("You Win!");
        printf("\nScore %d", count);
        break;
    }
    }
}