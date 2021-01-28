#include <stdio.h>

void main() {
   char s1[] = "GLA University";
   int i = 0; 
   while(s1[i++] != '\0');
   printf("Length of string '%s' is %d", s1, i-1);
  
}