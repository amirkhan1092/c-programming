// write a statement to read the complete line in C_Programming 


#include<stdio.h>
void main()
{
    char str[100];
    printf("Write the name: ");
    gets(str); // single line
    // scanf("%[^\n]s", str); // single line

    // printf("Welcome, %s", str);

    puts("Welcome, ");-
    puts(str);


}