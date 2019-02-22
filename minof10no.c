#include <stdio.h>
int main(void)
{
    int array[50], i, min;
    for (i = 0; i < 10; i++)
		   scanf("%d", &array[i]);
    min = array[0];
    for (i = 1; i < 10; i++) 
  {
		if (min > array[i])
			min = array[i];
	}
 printf("%d",min);
  return 0;
}
