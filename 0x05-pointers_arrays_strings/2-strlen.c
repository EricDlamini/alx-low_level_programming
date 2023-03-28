#include "main.h"
#include <stdio.h>
/**
 * _strlen - prints length
 * @s: parameter for length
 * Return: 0
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
