#include<stdio.h>

void main()
{
    int a, b, x, y, z;
    int k;
    int max=0;
    scanf("%d %d", &a, &b);
    scanf("%d", &k);
    x = a|b;
    y = a^b;
    z = a&b;    
    max = x > max ? x <= k?x:max:max;
    max = y > max ? y <= k?y:max:max;
    max = z > max ? z <= k?z:max:max;
    
    printf("%d", max);
  


}