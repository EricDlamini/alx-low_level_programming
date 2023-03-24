#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isupper - shows upper or loweer case
 *
 * @c: parameter
 * Return: return 1 if upper
 * and 0 if lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
