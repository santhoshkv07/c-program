#include<stdio.h>
int main()
{
int n;
char s[100];
scanf("%s %d",&s,&n);
for(int i=n;i<strlen(s);i++)
{
printf("%c",s[i]);
}
return 0;
}
