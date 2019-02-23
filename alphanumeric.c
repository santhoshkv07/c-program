#include<stdio.h>
#include<string.h>
int main()
{
  char *a;
  scanf("%[^\n]s",a);
  for(int i=0;i<strlen(a);i++)
  {
    if(a[i]>='0' && a[i]<='9')
     printf("%c",a[i]); 
  }
  return 0;
}
