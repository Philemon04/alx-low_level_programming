#include "main.h"
#include <stdio.h>

int main(void)
{
	int i = 1024, int j, int sum=0;
	for(j=0; j<1024; j++)
	{
		if((j%3)==0 || (j%5)==0)
		{
			sum=j+sum;
		}
		else 
			sum=0;
	}
	printf("%d\n", sum);

	return (0);
}


