#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string
 * @s: the string
 * @accept: bytes in the string
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
