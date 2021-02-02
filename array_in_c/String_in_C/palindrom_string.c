#include<stdio.h>
#include<string.h>
void main()
{
char a[20],b[20],flag;
gets(a);
strcpy(b,a);
strev(a);
flag=strcmp(b,a);
if(flag==0)
printf("yes it is ann palendrome");
else
printf("not paridrom");
}