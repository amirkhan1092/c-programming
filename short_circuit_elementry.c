#include<stdio.h>


void main()
{
    int x, y, out_or, out_and;
    x = 1;
    y = 2;

    // out_or = x++ || y++; // in logical OR if first condition is satisfied next one is skipped 
    // x++/++x return 1/2(True), y++ will not run 

    out_or = --x || y++;
    //  --x return 0(False), y++ will run 
    // x-- return 1(True), y++ will not run 

    // out_and = x++ && y++;  // in logical AND first condition is True then second condition statement run only 

    // printf("Value of out %d\n", out_or);
    printf("Value of out %d\n", out_or);
    printf("Value of x %d\n", x);
    printf("Value of y %d\n", y);  

}