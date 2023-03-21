#include "main.h"
/**
 *_islower - prints lower case
 *Return: 1 for lower case and 0 for upper case
 *@c: parameter to be printed
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

