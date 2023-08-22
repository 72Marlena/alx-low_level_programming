#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
