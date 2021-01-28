#include<stdio.h>
void main()
{
    char str[100];

    printf("Write the line ");
    gets(str);

    printf("User entered %s", str);
}