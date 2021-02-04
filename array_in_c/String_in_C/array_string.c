#include<string.h>
#include<stdio.h>
#include<string.h>

void main()
{
    char names[10][30];
    int N, i, len;
    // N = 4;
    char ch;
    char ch1;
    printf("Enter the count of name: ");
    scanf("%d\n", &N);

    for(i=0; i<N; i++)
    {
        gets(names[i]);
    }
    
    for(i = 0; i<N; i++)
      printf("%d name :- %s and length %d \n", i+1, names[i], khudkafun(names[i]));
    

}

        // 4\n        