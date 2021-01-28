#include<stdio.h>
#include<string.h>

void main()
{
    char name[1024]="Amir  khan";
    // scanf("%[^\n]", name );
    //puts(name);
    // name = "Amir khan";
    printf("Welcome! %s\n", name);
    printf("\nlenght of string %d\n", strlen(name));

}