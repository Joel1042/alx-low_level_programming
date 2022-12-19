#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int X;
	int Y;
	int result;

	for (X = 0; X <= 9; X++)
	{
		for (Y = 0; Y <= 9; Y++)
		{
			result = (X * Y);

			if (Y == 0)
			{
				_putchar('0' + result);
			}
			else if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
		}
		_putchar('\n');
	}
}
