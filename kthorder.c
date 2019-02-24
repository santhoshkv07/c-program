#include<stdio.h>
int main()
{
int n,k,x[100];
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
for(int i=0;i<n;i++)
{
if(x[i]==k)
 printf("%d",i);
}
return 0;
}
