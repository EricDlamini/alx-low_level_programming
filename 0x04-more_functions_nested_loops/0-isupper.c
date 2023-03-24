#include "main.h"
/**
 * isupper - shows upper or loweer case
 *
 * @c: parameter
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
