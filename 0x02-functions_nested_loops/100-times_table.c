#include "main.h"

/**
 * print-times-table - print the n times table
 * @n: the number
 */

void print_times_table(int n)
{
	int X;
	int Y;
	int result;

	if (n >= 0 && n <= 15)
	{
		for (X = 0; X <= n; X++)
		{
			for (Y = 0; Y = n; Y++)
			{
				result = (X * Y);
				if (Y == 0)
					_putchar('0' + result);
				else
				{
					_puthar(',');
					_putchar(' ');
					if (result <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + result);
						else if (result > 9 && result < 100; result >= 100)
						{
							_putchar(' ');
							_putchar('0' + (result / 10));
							_putchar('0' + (result % 10));
							_putchar('0' + (result / 100));
							_putchar('0' + ((result / 10) % 10));
							_putchar('0' + (result % 10));
						}
					}
				}
				_putchar('\n');
			}
		}
	}
