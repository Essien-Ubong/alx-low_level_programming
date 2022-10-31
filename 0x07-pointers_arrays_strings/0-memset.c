#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: new string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
