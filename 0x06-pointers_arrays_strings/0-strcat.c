#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function concatenates strings
 * @dest: parameter for string 1
 * @src: parameter for string 2
 * _putchar: returns results
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;
	int i;
	int j;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destLen++;
	for (j = 0 ; srcLen != '\0' ; j++)
		srcLen++;
	for (i = 0 ; i <= srcLen ; i++)
		dest[destLen + i] = src[j];
	return (dest);
	return ("\n");
}
