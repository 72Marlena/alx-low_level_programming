#include "main.h"

/**
 * _strlen - will count the length of a string
 * @s - this is the string to be counted
 * return: length of a string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
