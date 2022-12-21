#include "main.h"

/**
 * print_to_98 - print natural number
 * @n: the number
 * return: 0
 */

void print_to_98(int n)
{
	for (n = 0; n > 98; n++)
	{
		for (n = 0; n < 98; n--)
		{
			_putchar('"');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
