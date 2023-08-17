#include <stdio.h>

/**
 * main - printing alphabets
 *
 * Return: 0 (Always)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
