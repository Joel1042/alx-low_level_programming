#include "main.h"
#include <stdio.h>

/**
 * main -check the code
 *
 * Return: Always
 */
int main(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Roben Allen";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
	return (0);
}
