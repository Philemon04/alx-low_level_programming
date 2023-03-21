#include "main.h"
#include <stdio.h>


/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
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


