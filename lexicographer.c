#include<stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char str[10], temp[50];
    printf("Enter a word:\n");
    for(i=0; i<strlen(str); ++i)
        scanf("%s",str[i]);
    for(i=0; i<strlen(str); ++i)
        for(j=i+1; j<strlen(str) ; ++j)
        {
          if(strcmp(str[i], str[j])>0)
          {
           strcpy(temp,str[i]);
           strcpy(str[i], str[j]);
           strcpy(str[j], temp);
          }
        }
    printf("\nIn lexicographical order: \n");
    for(i=0; i<strlen(str); ++i)
    {
        printf("%c",str[i]);
    }
    return 0;
}
