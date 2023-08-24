#include "main.h"

/**
 * _strcpy - copies the string pointed to by src plus \0
 * @src: source to be copied
 * @dest: destination
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0 ; src[l] != '\0' ; l++)
		dest[l] = src[l];
	dest[l] = '\0';
	return (dest);
}
