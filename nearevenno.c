#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
x=x-(x%2);
printf("%d",x);
return 0;
}
