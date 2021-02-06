// sum of two number
#include<stdio.h>

int add(int , int); // function declaration 

void main()
{
    int a, b, out;
    a = 21;
    b = 34;
    out = add(a, b);  // function calling
    printf("sum of %d and %d is %d", a, b, out);
}

// function definition 
int add(int x, int y)  
{   int c;
    c = x + y;                  // function body
    return c;    
}