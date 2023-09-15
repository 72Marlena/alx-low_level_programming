#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of an array
 * @c: the character tyo be entered
 * Return: ptr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (j = 0 ; j < size ; j++)
		ptr[j] = c;
	return (ptr);
}
