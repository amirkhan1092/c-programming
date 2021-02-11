#include<stdio.h>
#include<string.h>

void main()
{
    int num;
    char arr[100];
    num = 2134;

    sprintf(arr, "Result is %6d", num);
    

    printf("%d", strlen(arr));

}