#include<stdio.h>

void main()
{
    char st[100] = "RAM BABU";
    char reg[100];

    int c=0, flag, index=0;
    char x;
    
    for(int i=0; st[i] != '\0'; i++)
    {
        x  = st[i];
        flag = 1;
        //
        for(int p=0; p<index; p++)
        {
            if(reg[p] == x)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
        c = 0; 
        reg[index++] = x;
        for(int j=0; st[j] != '\0'; j++)
        {
            if(x == st[j])
            {
                c++;
            }
        }
        printf("Char %c : [%d]\n", x, c);

    }  }
    }
   
/*
input 
4
12 6 7 8 1 1

output
2


*/
