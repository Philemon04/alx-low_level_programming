#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to be passed
 *
 * Return: int
 **/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		++count;

	return (count);
}

