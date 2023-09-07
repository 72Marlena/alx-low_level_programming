#include "main.h"

/**
 * _strcat - concatenates two strings, where dest appends src
 * @dest: destination string
 * @src: source string (the string to be appended)
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int destlength = 0;
	int srclength = 0;

	for (n = 0 ;  dest[n] != '\0' ; n++)
		destlength++;
	for (n = 0 ; src[n] != '\0' ; n++)
		srclength++;

	for (n = 0 ; n <= srclength ; n++)
		dest[destlength + n] = src[n];
	return (dest);
}
