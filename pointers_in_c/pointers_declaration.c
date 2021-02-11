#include<stdio.h>

void main()
{
    int num=10, *ptr=&num;
    // const int value=20;  
    printf("Value at address %p is %d\n", ptr, *ptr);
    (*ptr)++;
    // value = 20;

    printf("Value at address %p is %d\n", ptr, *ptr);
    // printf("Value is %d", value);
}

// #include <stdio.h>
 
// int main()
// {
//     int *ptr;
//     int x;
 
//     ptr = &x;
//     *ptr = 0;
 
//     printf(" x = %d\n", x);
//     printf(" *ptr = %d\n", *ptr);
 
//     *ptr += 5;
//     printf(" x  = %d\n", x);
//     printf(" *ptr = %d\n", *ptr);
 
//     (*ptr)++;
//     printf(" x = %d\n", x);
//     printf(" *ptr = %d\n", *ptr);
 
//     return 0;
// }