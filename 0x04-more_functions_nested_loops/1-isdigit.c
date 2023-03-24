#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isdigit - checks for a digit
 *
 * Return: return 1 if digit
 * and 0 is otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
