#include <stdio.h>
#include<string.h>
int main(void)
{ 
  int count=0;
  char *a;
  scanf("%[^\n]s",a);
  for(int i=0;i<strlen(a);i++)
  {
    if(a[i]==' ')
      count=count+0;
    else
     count+=1;  
  }
  printf("%d",count);
  return 0;
}
