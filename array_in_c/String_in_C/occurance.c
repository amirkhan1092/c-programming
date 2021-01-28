#include<stdio.h>

void main()
{
    char st[100] = "GLA UNIVERSITY, Mathura";
    char arr[100];
    int items = 0;
    int count = 0, c, flag; 
    printf("String %s", st);
    while(st[count++] != '\0');


    for(int i=0; i<count-1; i++)
    {
        c = 0;
        flag = 0;
        // logic
       
            for(int x=0; x<items; x++)
            {
                if(st[i] == arr[x])
                {
                    flag = 1;
                    break;
                }   
            }
        if(flag == 0)
        {
        arr[items++] = st[i];  

        for(int j=0; j< count-1; j++)
        {
            if(st[i] == st[j])
            {
                c++;
            }
        }
        printf("Char %c : [%d]\n", st[i], c);

        }
    }
   

}