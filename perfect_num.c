// program to check the given number if perfect or not

#include<stdio.h>

void main()
{
   int num, sum=0;
   printf("Enter the number ");
   scanf("%d", &num);

   for(int i=1; i<num; i++)
   {
      if(num%i==0)
         sum += num;
   }
   if(sum == num)
      printf("perfect number");
   else
      printf("not perfect");
      
}