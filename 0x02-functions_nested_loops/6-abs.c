#include "main.h"
/**
 * _abs - absolute value
 * @i: parameter
 * Return: prints the absolute values
 */

int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
