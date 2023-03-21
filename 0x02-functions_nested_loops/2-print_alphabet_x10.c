#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets times ten
 * _putchar: prints results
 * Return: always
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char a;

		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		n++;
	}
}
