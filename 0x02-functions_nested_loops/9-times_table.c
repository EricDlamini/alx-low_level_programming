#include "main.h"
/**
 * times_table - prints table of numbers
 *
 * @i, j, t: parameter used
 *
 * Return: is 0
 */

void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j;
		int t;

		while (j == 0 && j <= 9)
		{
			t = j + j;
			_putchar(t + '0');
			j++;
		}
		_putchar(i + '0');
		i++;
	}
}
