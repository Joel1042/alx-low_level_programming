#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char x = 'a';

	char X = 'A';

	while (x <= 'a')
	{
		putchar(x);
		x++;
	}
	while (X <= 'A')
	{
		putchar(X);
		X++;
	}

	putchar('\n');
	return (0);
}
