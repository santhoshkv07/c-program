#include<stdio.h>
int main(int argc, char *argv[])
 {
     if(argc != 2)
     {
         printf("error, bad arguments!\n");
        return 1;
     }
     else 
     {
         char* isogram = NULL;
         isogram = (char*)malloc(sizeof(argv[1])+1);
         strcpy(isogram, argv[1]);
         for(int i=0; i<strlen(isogram); i++)
         {
             printf("isogram[%d]==%s\n", i, &isogram[i]);
         }
     }
     return 0;
 }
