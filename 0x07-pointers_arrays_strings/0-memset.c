#include "main.h"

/**
 * _memset - fills memory with a constante byte
 * @n: number of bytes
 * @s: memory area pointed
 * @b: constant value
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
