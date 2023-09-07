#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates 2 strings without null termination
 * @src: source string
 * @dest: destination string
 * @n: bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int m;

	for (m = 0 ; m < n && *src != '\0' ; m++)
	{
		dest[length + m] = *src;
		src++;
	}
	dest[length + m] = '\0';
	return (dest);
}
