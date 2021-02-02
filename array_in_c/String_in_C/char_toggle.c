/* Write a C-program for toggle the char Alphabet (Upper 2 lower/ lower to upper)
 of given string.
 */

#include<stdio.h>

void main()
{
    char str[100];
    printf("Enter the string ");
    gets(str);

    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A'  && str[i] <= 'Z')
            str[i] += 32;
        else if(str[i] >= 'a'  && str[i] <= 'z')
            str[i] -= 32;         
    }
    printf("\nOutput String\n%s", str);
    
}