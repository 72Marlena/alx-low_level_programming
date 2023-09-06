#include "main.h"

/**
 * print_alphabet_x10 - prints a set of alphabets in lower cases ten times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int l;
	int i = 0;

	while (i < 10)
	{
		while (l = 'a' ; l <= 'z')
			_putchar(l);
			l++;
	}
	{
		_putchar('\n');
		i++;
	}
}
