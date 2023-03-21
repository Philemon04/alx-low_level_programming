#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char alphabet;

	while (i <= 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		i++;
		_putchar('\n');
	}
}
