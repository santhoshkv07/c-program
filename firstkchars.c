#include<stdio.h>
#include<conio.h>
int main()
{
char *a;
int b;
scanf("%[^\n]s %d",&a,&b);
for(int i=0;i<strlen(a);i++)
{
for(int j=i;j<b;j++)
{
printf("%c",a[j]);
}
}
return 0;
}
