#include "main.h"

/**
 * rev_string - reverse string
 * @s: parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int len;

	for (i = 0 ; s[i] != '\0' ; i++)
		len++;
	for (i = len ; i >= 0 ; i--)
		*s = s[i];
	return;
}
