#include "main.h"

/**
 * print_line - draws a straightline in the terminal
 * @n: no of times that _ will be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
