#include "main.h"

/**
 * _isalpha - prints alphabet only
 * @c: parameter to be printed
 * Return: prints 1 for alphabet otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
