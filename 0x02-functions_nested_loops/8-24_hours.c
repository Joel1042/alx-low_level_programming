#include "main.h"

/**
 * jack_bauer -prints every minute of the day
 */

void jack_bauer(void)
{
	int hour0;
	int hour1;
	int minute0;
	int minute1;

	for (hour0 = 0; hour0 <= 2; hour0++)
	{
		for (hour1 = 0; hour1 <= 3; hour1++)
		{
			for (minute0 = 0; minute0 <= 5; minute0++)
			{
				for (minute1 = 0; minute1 <= 9; minute1++)
				{
					_putchar('0' + hour0);
					_putchar('0' + hour1);
					_putchar(';');
					_putchar('0' + minute0);
					_putchar('0' + minute1);
					_putchar('\n');
				}
			}
		}
	}
}
