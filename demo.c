#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
int len,i;
len=strlen(str);
printf("enter the string:");
scanf("%s",&str);
for(i=len-1;i>=0;i--)
{
printf("%c",str[i]);
}
return 0;
}

