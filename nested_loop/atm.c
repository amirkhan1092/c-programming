#include<stdio.h>

void main()
{
    unsigned int amount, two_nk, five_nk, hundred_nk;
    printf("enter the amount ");
    scanf("%d", &amount);

    amount -= 100; 
    hundred_nk = 1;
    two_nk= amount/2000;
    amount -= two_nk*2000;

    five_nk= amount/500;
    amount -= five_nk*500;

    hundred_nk += amount/100;

    printf("2k notes %d\n", two_nk );
    printf("500 notes %d\n", five_nk );
    printf("100 notes %d\n", hundred_nk );
   

}