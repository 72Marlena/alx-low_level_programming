#include <stdio.h>

/**
 * main - main function
 i*
 * Return: 0 (always)
 */

int main(void)
{
	int n;
	char c;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	for (c = 'a' ; c <= 'f' ; c++)
		putchar(c);
	putchar('\n')
	return (0);
}
