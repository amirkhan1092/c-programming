// String in c 
// sequence of char enclosed between double quotes 
#include<stdio.h>

void main()
{
    char arr[3] = "GLA";

    int count=0;

    while(arr[count++] != '\0');

    // for(count=0; count<5; count++)
    // {
    //     printf("%d ", arr[count]);
    // }
    

    printf("length of String %d", count-1);
/*
    test case1
    input
    "RAM PRATAP"
    output
    R : 2
    A : 3
    M : 1
      : 1
    P : 2
    T : 1  


*/

}