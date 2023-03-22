#include "main.h"
/**
 * times_table - prints table of numbers
 *
 * @i, j, t: parameter used
 *
 */

void times_table(void)
{
	int i = 0;

	for (i < 10)
	{
		int j;
		int t;

		for (j == 0 && j <= 9)
		{
			t = j + j;
			_putchar(t + '0');
			_putchar(',');
			_putchar('\n');
			j++;
		}
		_putchar(i + '0');
		i++;
	}
}
