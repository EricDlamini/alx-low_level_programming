#include "main.h"

/**
 * print_rev - prints string reverse
 * @s: parameter thst holds the string
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		len++;
	for (i = len ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
