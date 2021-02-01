#include<string.h>
// frequency of each char
#include<stdio.h>

void main()
{
    char st[100], reg[50];
    int count = 0, i, j;

    puts("Enter the String: ");
    // scanf("%s", st); // single word 
    //scanf("%[^\n]s", st); // single line
    gets(st);  // single line
    
    int flag, index=0;
    // logic here
    for(i=0; st[i] != '\0'; i++)
    {
    flag = 1;
    //
    for(int k=0; k<index; k++)
        if(st[i] == reg[k])
        {
            flag = 0;
            break;
        }    
    if(flag)
    {
    reg[index++] = st[i];    
    count = 0;
    for(j=0; st[j] != '\0'; j++)
        if(st[i] == st[j])
            count++;
            
    
    printf("char %c : %d\n", st[i], count);
    }
    }



    


}
