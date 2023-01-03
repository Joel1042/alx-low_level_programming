#include "main.h"
#define NULL 0

/**
 * _strchr - function that locate a character in a string
 * @c: the first occurence of the character 
 * @s: the string
 * Return: pointer to character in string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
