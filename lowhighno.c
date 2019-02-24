#include <stdio.h>
int main() 
{
	int array[100];
	int i,n;
  scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	int max=array[0];
	int min=array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	printf("\n%d",min);
	printf("\n%d",max);
	return 0;
}
