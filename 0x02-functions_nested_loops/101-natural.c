#include "main.h"
#include <stdio.h>

/*
 * main() - prints multiples of 3 and 5
 * return 0
 */

int main(void)
{
	int i = 1024;
       	int j = 0;
       	int sum = 0;
	for (j=0; j<i; j++)
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


