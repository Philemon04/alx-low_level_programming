#include "main.h"

/**
 * more_numbers - print 0-14 10 times
 *
 * Return: void
 **/

void more_numbers(void)
{
	int c, d;

	for (c = 0; c <= 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 14)
				_putchar('1');
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}




