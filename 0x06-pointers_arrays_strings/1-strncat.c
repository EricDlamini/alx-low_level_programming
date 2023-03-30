#include "main.h"

/**
 * _strncat - concatenates string
 * @dest: para 1
 * @src: para 2
 * @n: para 3
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destLen = 0;
	int srcLen = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destLen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srcLen++;
	for (i = 0 ; i < n ; i++)
		dest[destLen + i] = src[i];
	return (dest);
}
