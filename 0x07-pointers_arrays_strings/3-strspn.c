#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial segment
 * @accept: origin of segment
 * Return: The numbers of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int origin = 0;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				origin++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (origin);
		}
		i++;
	}
	return (origin);
}
