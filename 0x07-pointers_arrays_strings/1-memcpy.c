#include "main.h"

/**
 * _memcpy - function that copies that copies memory area
 * @n: number of byte
 * @src: copy source
 * @dest: copy destination
 * Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}
