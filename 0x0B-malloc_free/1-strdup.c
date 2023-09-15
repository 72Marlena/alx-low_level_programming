#include "main.h"

/**
 * _strdup - returns a pointer which contains a copy os the string
 * @str: the char
 * Return: duplicate of the string
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == 0)
		return (NULL);

	ptr = malloc(strlen(str) + 1);

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, str);
	return (ptr);
}
