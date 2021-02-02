// frequency of char 
// read the string from user (single line/ single word)

#include<stdio.h>

void main()
{
    char arr[500], reg[100];
    int i, count, flag;

    printf("Enter the name: ");
    // scanf("%s", arr);  // single word
    // scanf("%[^\n]s", arr); // read complete line
    gets(arr); // // read complete line
    int index=0;
    // logic here
    for(int k=0; arr[k] != '\0'; k++)
    {
    flag = 1;
    //
    for(int p=0; p<index; p++)
    {
        if(arr[k] == reg[p])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {    
    reg[index++] = arr[k]; 
    count = 0;
    for(i=0; arr[i] != '\0'; i++)
    {
        if(arr[k] == arr[i])
            count++;
    }
    printf("char %c : %d\n", arr[k], count);
    }

}}