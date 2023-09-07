#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0 ; m < n && src[m] != '\0' ; m++)
		dest[m] = src[m];
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
