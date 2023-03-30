#include "main.h"

/**
 * _strncpy - copy texts
 * @dest: para 1
 * @src: para 2
 * @n: para 3
 * Return: copied texts
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
