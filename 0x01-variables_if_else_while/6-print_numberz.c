#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	int x = '0';

	while (x <= '9')

	{
		putchar(x);
		x++;
	}

	putchar ('\n');
	return (0);
}
