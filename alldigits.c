#include<stdio.h>
int main()
{
int m,n,o,p,q;
scanf("%d",&m);
n=m/100;
o=m%100;
p=n%10;
q=n/10;
printf("%d %d %d",n,o,p);
return 0;
}
