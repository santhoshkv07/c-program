#include<stdio.h>
int main()
{
int n,k,x[100],count=0;
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(n[i]==n[j])
count++;
}
}
if(count>0)
printf("yes");
return 0;
}
