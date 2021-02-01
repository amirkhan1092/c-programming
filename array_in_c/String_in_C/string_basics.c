// string 
// sequence of char 

#include<stdio.h>

void main()
{
    char st[100]; // declaration of string 
    // int N, num, i;
    // N = 15;
    int len=0;
    printf("Enter the String: ");
 
    // scanf("%s", st);  // read single word

    // scanf("%[^\n]s", st);  // single line full except \n 

    gets(st);

    // while(st[len++] != '\0');
    for(len=0; st[len] != '\0'; len++ );



    printf("Welcome, %s\nlength is %d\n", st, len-1);
    // puts(st);
/*
   test case0
   input 
   RAM BABU
   output 
   R : 1
   A : 2
   M : 1
     : 1
   B : 2
   U : 1   

*/
}
