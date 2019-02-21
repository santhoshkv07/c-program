#include<stdio.h>
int main()
{
int m,n=0,p;
scanf("%d",&m);
while(m!=0)
{
 p=m%10;
 n=n+p;
 m=m/10;
 }
printf("%d",n);
return 0;
}
