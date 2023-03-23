#include "main.h"

/**
 * isupper - checks for uppercase character
 * @c: int to be passed
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
