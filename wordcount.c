#include <stdio.h>
#include<string.h>
int main(void)
{ 
  int count=0;
  char *a;
  printf("enter the sentance ending with space:")
  scanf("%[^\n]s",a);
  for(int i=0;i<strlen(a);i++)
  {
    if(a[i]==' ')
      count=count+1;
    else
     count+=0;  
  }
  printf("%d",count);
  return 0;
}
