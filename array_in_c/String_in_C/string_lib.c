// Write a C-program for toggle the char Alphabet (Upper 2 lower/ lower to upper)
// of given string. 

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100] = "C-Programming Class";
    char str2[100] = " GLA University";
    // int N, flag;
    // N = strlen(str);
    // strcpy(str2, str);

    // flag = strcmp("AbcD ", "Abcd");  // -1
    /*
    0 both string is equal 
    1 not equal str1 is in greater ascii
    -1 not equal str2 is in greater ascii
    */

    strcat(str1, str2);
    strcat(str1, " in AB7");

    printf("Strings result %s\n", str1);


}
